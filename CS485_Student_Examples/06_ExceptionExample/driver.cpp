//***************************************************************************
// File name:  driver.cpp
// Author:     Chadd Williams
// Date:       3/9/2017
// Class:      CS485
// Assignment: Demonstrate exceptions
// Purpose:    Demonstrate how exceptions are caught and thrown
//***************************************************************************

#include <iostream>
#include "CS485Exception.h"
#include <exception>

//***************************************************************************
// Function:    main
//
// Description: Demonstrate catching exceptions
//
// Parameters:  None
//
// Returned:    EXIT_SUCCESS
//***************************************************************************

int main ()
{
  int *paValues;
  int size = -1;
  
  std::bad_alloc cNotAString;

  try
  {
    paValues = new int[size]; // try to allocate array of size -1
  }
  catch (const std::bad_alloc& e)
  {
    std::cout << e.what () << std::endl;
  }

  try
  {
    dynamic_cast<std::string&>(cNotAString);
  }
  catch (const std::exception &e)
  {
    std::cout << e.what () << std::endl;
  }

  try
  {
    throw CS485Exception (42);
  }
  catch (const CS485Exception &e)
  {
    std::cout << e.what () << std::endl;
  }

  //throw CS485Exception (0);

  return EXIT_SUCCESS;
}