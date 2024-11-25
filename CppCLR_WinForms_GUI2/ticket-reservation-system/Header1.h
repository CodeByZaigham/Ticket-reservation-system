// header1.h 
#pragma once

// In contrast to header2.h, here we have no interaction with 
// the user interface. This header contains only business 
// logic in standard C++ (including most of C++11, C++14 and C++17)

namespace N_header_1
{

  int plus_1(int x) // a very simple example for application logic
  {
    return x + 1;
  }

}