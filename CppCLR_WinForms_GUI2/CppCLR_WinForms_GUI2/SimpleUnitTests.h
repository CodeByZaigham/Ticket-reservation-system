// Copyright Richard Kaiser, 2022. https://www.rkaiser.de. All rights reserved.  

// Diese Quelltexte dürfen in eigenen Programmen verwendet werden, wenn sie 
// einen Hinweis auf die Quelle (die erste Zeile oben) enthalten. In keinem 
// Fall wird eine Haftung für direkte, indirekte, zufällige oder Folgeschäden 
// übernommen, die sich aus der Nutzung ergeben.

// It is permitted to use this source text in programs of your own, provided that 
// it contains a reference to the source (the first line above). All 
// liabilities for use of the code are disclaimed.

#pragma once
#ifndef SIMPLEUNITTESTS_H__ 
#define SIMPLEUNITTESTS_H__

#include <string>
#include <fstream>
#include <iostream>
//#include <sstream>

#include <ctime>  // for Now
#include <cmath>  // for fabs and pow
#include <limits> // for numeric_limits<double>::max and min


#if __GNUG__  // gnu gcc c++ compiler
  #if GCC_VERSION >=5 
  #define USE_CPP11_CHRONO 1
  #else
  #define USE_CPP11_CHRONO 0
  #endif
#elif _MSC_VER // Microsoft visual C++ compiler
  // https://docs.microsoft.com/de-de/cpp/preprocessor/predefined-macros?view=msvc-170
  #if _MSC_VER >= 1600     // Microsoft C/C++ VS 2010
  #define USE_CPP11_CHRONO 1
  #else 
  #define USE_CPP11_CHRONO 0
  #endif
#endif

#if USE_CPP11_CHRONO
#include <chrono>
#endif

// OpenConsole (see below) needs some Windows.h functions. However
// #include <Windows.h> results in a lot of compiler errors
// https://social.msdn.microsoft.com/Forums/en-US/f440129f-d53d-42c9-96e7-c4b83536fbf6/could-not-compile-wrapper-ccli-project?forum=vcgeneral
// Use the workaround from rk1::Win32 below. 

namespace rk1
{

#ifdef  __cplusplus_cli   // so that SimpleUnitTests.h can be used  
   // with non-Windows Forms Compilers (like GCC or MS Visual C++ for console apps)
  namespace Win32
  { // thanks to https://social.msdn.microsoft.com/Forums/vstudio/en-US/2caf21f4-1414-4a49-8c7a-29609e6fe298/ccli-how-to-open-a-console-in-windows-forms-application?forum=vcgeneral
    using namespace System::Runtime::InteropServices;
    [DllImport("kernel32.dll", CallingConvention = CallingConvention::StdCall)]
    int AllocConsole();
    // [DllImport("kernel32.dll", CallingConvention = CallingConvention::StdCall)]
    // int FreeConsole();

    // [DllImport("kernel32.dll", CallingConvention = CallingConvention::StdCall)]
    // int SetConsoleTitle(String^ lpConsoleTitle);
    [DllImport("kernel32.dll")]
    int SetConsoleTitle(String^ lpConsoleTitle);
  }
#endif

  void OpenConsole()
  { // Calling OpenConsole opens a console window in a Windows Forms  
    // application, to which you can write with cout, just the same 
    // way as in a console application.
#ifdef  __cplusplus_cli   
    if (Win32::AllocConsole())
    {
      std::cout.clear(); // without these clear-calls it 
      std::cin.clear();  // may happen that freopen does 
      std::cerr.clear(); // not work
      Win32::SetConsoleTitle(L"Simple Unit Tests Console");  // Title
      FILE* new_stdout, * new_stdin, * new_stderr;

      freopen_s(&new_stdout, "CONOUT$", "w", stdout); // for cout
      freopen_s(&new_stdin, "conin$", "r", stdin);    // for cin
      freopen_s(&new_stderr, "conout$", "w", stderr); // for cerr

      // alternatively
      // std::freopen("conout$", "w", stdout); // für cout
      // std::freopen("conin$", "r", stdin);   // für cin
      // std::freopen("conout$", "w", stderr); // für cerr
      //
    }
#endif
  }

  void test_WriteToConsole()
  {
    OpenConsole();
    std::cout << "Hello Konsole" << std::endl;
  }

  bool NearlyEqual(double x, double y, int p)
  { // true, if x and y differ by less then 5 units in position (p+1)
    double eps = 1E-10;
    if ((0 <= p) && (p <= 16))
      eps = 5 * std::pow(0.1, p);
    double diff = std::fabs(x - y);
    if (x == 0 || y == 0) // NearlyEqual(x,0) ==> diff=|x|
      return diff < eps;
    else // x!=0 and y!=0
      return (diff / std::fabs(x) <= eps) && (diff / std::fabs(y) <= eps);
  }


  class Assert {
    static std::ofstream fout;
    static int PassCount, FailCount;
    static bool logTestcases; // if true, even successful test cases are logged
    enum class LogTestCases { Yes, No };

    static void showResult(bool passed, std::string msg)
    { // shows one test result 
      if (!passed)
      {
        WriteLine("Test failed: " + msg);
        ++FailCount;
      }
      else
      {
        if (logTestcases)
          WriteLine("Test passed: " + msg);
        ++PassCount;
      }
    }

    template<typename T>
    static void showResult(T expected, T actual, std::string message)
    {
      showResult(expected == actual, " expected: <" + std::to_string(expected) +
        ">, actual: <" + std::to_string(actual) + "> " + message);
    }

    template<typename T>
    static void showResult(T* expected, T* actual, std::string message)
    {
      showResult(expected == actual, " expected: <" + to_string(*expected) +
        ">, actual: <" + to_string(*actual) + "> " + message);
    }

    static void showResult(std::string expected, std::string actual,
      std::string message)
    {
      showResult(expected == actual, " expected: <" + expected + ">, actual: <" +
        actual + "> " + message);
    }

    static void showResult(bool expected, bool actual,
      std::string message)
    { // display boolean values by "true" and "false" 
      std::string exp = "false";
      std::string act = "false";
      if (actual) act = "true";
      if (expected) exp = "true";
      showResult(expected == actual, " expected: <" + exp + ">, actual: <" +
        act + "> " + message);
    }

    static std::string Now()
    {
#if USE_CPP11_CHRONO
      using namespace std::chrono;
      system_clock::time_point today = system_clock::now();
      time_t tt = system_clock::to_time_t(today);

      std::string result;
      {
        std::chrono::time_point<std::chrono::system_clock> end = 
          std::chrono::system_clock::now();
        std::time_t end_time = std::chrono::system_clock::to_time_t(end);

        char dest_string[26];
        ctime_s(dest_string, 26, &end_time);
        result = dest_string;

        return result;
      }
#else
      return "??? No chrono, no Now";
#endif
    }

  public:

    Assert() // Construktor 
    { 
      Init("SimpleUnitTests");
    }

    static void WriteLine(std::string s)
    {
      std::cout << s << std::endl;
      if (fout.is_open())
      {
        fout << s << std::endl;
      }
    }


    static void Init(std::string message = "", LogTestCases log = LogTestCases::No)
    {
#ifdef  __cplusplus_cli   
      rk1::OpenConsole(); // only for Windows Forms apps
#endif
      WriteLine("");
      WriteLine("************* " + Now() + " " + message + "   ************* ");
      logTestcases = (log == LogTestCases::Yes);
      PassCount = 0;
      FailCount = 0;
    }

    static void set_logTestcases(bool value)
    {
      logTestcases = value;
    }


    static void OpenOutputFile(std::string Path, std::string FileName)
    {
      if (fout.is_open())
      {
        fout.close();
      }
      fout.open(Path + FileName, std::ios::app);
      std::cout << "log-File: " << Path + FileName << std::endl;
    }

    static void Reset()
    {
      PassCount = 0;
      FailCount = 0;
    }

    // use the same order of the parameters as Microsoft:
    //   public static void AreEqual(double expected,double actual)

    template<typename T>
    static void AreEqual(T expected, T actual, std::string message = "")
    {
      showResult(expected, actual, message);
    }

    static void AreEqual(std::string expected, std::string actual, 
      std::string message = "")
    { // string template specialisation
      showResult(expected, actual, message);
    }

    static void AreEqual(bool expected, bool actual, std::string message = "")
    { // bool template specialisation
      showResult(expected, actual, message);
    }

    static void AreEqual(double expected, double actual, int digits,
      std::string message)
    { // digits: the number of significant digits, for which the values 
      // have to be equal
      showResult(NearlyEqual(expected, actual, digits),
        " expected: <" + std::to_string(expected) + ">, "
        "actual: <" + std::to_string(actual) + "> " + message);
    }

    static void AreEqual(double expected, double actual, std::string message)
    { // usually 10 significant digits are enough for type double
      int DefaultDigits = 10;
      AreEqual(expected, actual, DefaultDigits, message);
    }

    // AreNotEqual
    static void AreNotEqual(double expected, double actual, int digits,
      std::string message)
    {
      showResult(!NearlyEqual(expected, actual, digits),
        " erwartet: <" + std::to_string(expected) + ">, "
        "tatsächlich: <" + std::to_string(actual) + "> " + message);
    }

    static void AreNotEqual(double expected, double actual, std::string message)
    {
      int DefaultDigits = 10;
      AreNotEqual(expected, actual, DefaultDigits, message);
    }

    bool DefinitelyLess(double x, double y, int p)
    { // returns true, if x is definitely less then y
      return (x < y) && (!NearlyEqual(x, y, p));
    }

    static void Summary()
    {
      if (FailCount == 0)
        WriteLine("All tests passed (total: " +
          std::to_string(PassCount) + ")");
      else
        WriteLine(std::to_string(FailCount) +
          " Tests failed from " + std::to_string(PassCount + FailCount));
    }

  }; // class Assert

  
  int Assert::PassCount = 0; // Definitions of the static data members:
  int Assert::FailCount = 0;
  std::ofstream Assert::fout;
  bool Assert::logTestcases = false;
} // end of namespace rk1 

#endif // SIMPLEUNITTESTS_H__
