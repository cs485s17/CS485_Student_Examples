//***************************************************************************
// File name:  main.cpp
// Author:     Chadd Williams
// Date:       2/3/2017
// Class:      CS485
// Assignment: Copy And Swap Example
// Purpose:    Demonstrate how CopyAndSwap is implemented
//             https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Copy-and-swap
//***************************************************************************
#include "BigData.h"

//***************************************************************************
// Function:    setNumerator
//
// Description: Changes the value of the numerator to the value input.
//
// Parameters:  numerator   - numerator of the rational number
//
// Returned:    None
//***************************************************************************
int main ()
{
  bigData b1 = 1;
  bigData b2;
  bigData b3;

  b2 = b1;

  std::cout << "b2 " << b2;
  std::cout << std::endl;
  std::cout << "b1 " << b1 << std::endl;
}