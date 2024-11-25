#pragma once
#include "CppCLR_Utils.h"

#ifdef _DEBUG // to make Unittests only available in debug mode 
#include "SimpleUnitTests.h" // comment out to turn off Unittests
#endif


namespace N_rk1_Utils_demo
{ // These two functions are only short demos how to use
  // CppCLR_Utils.h and SimpleUnitTests.h. They are 
  // never called, you can remove them.

  void CppCLRUtils_demo()
  {
    // A short demo, how CppCLRUtils can be used. 

    // test string conversions 
    // from std::string to String::String and vice versa

    std::string s = "std::string";
    System::String^ S = rk1::to_String(s);
    s = rk1::to_string(S);

    // If you call in Form1(void), after InitializeComponent();
    //   rk1::StaticTextBox::Init(out_textBox);
    // you can write to out_textBox without have to pass the out_textBox
    //   rk1::StaticTextBox::WriteLine("Write to out_textBox");
  }

  int plus_1(int x) // a very simple function to illustrate unittests
  {
    return x + 1;
  }

  void SimpleUnitTests_demo()
  {
#ifdef SIMPLEUNITTESTS_H__ // this macro is defined by #include "SimpleUnitTests.h"
    // If you call all unittest functions after 
    //    #ifdef SIMPLEUNITTESTS_H__
    // removing 
    //    #include "SimpleUnitTests.h"
    // disables all unittests without having to remove or comment them out.
    rk1::OpenConsole(); // to display the unittest results in a 
    //                     separate console window
    rk1::Assert::Init("SimpleUnitTests_demo");
    rk1::Assert::AreEqual(1, plus_1(0), "test case: 1,plus_1(0)");
    rk1::Assert::AreEqual(18, plus_1(17), "test case: 18,plus_1(7)");
    // The first two tests are successful. Now a test that fails:
    rk1::Assert::AreEqual(0, plus_1(1), "test case: 0,plus_1(1)");
    rk1::Assert::Summary(); // reports one failed test

    // output will be: 
    //   SimpleUnitTests_demo * ************
    //    Test failed : expected: <0>, actual : <2> test case: 0, plus_1(1)
    //    1 Tests failed from 3

#endif // SIMPLEUNITTESTS_H__ 
  }

  void execute()
  {
    N_rk1_Utils_demo::CppCLRUtils_demo();
    N_rk1_Utils_demo::SimpleUnitTests_demo();
  }
}
