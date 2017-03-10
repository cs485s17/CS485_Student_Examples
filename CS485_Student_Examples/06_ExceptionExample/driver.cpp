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
// Function:    riskyException
//
// Description: Demonstrate the risks of throwing an exception
//
// Parameters:  param - int to store in the new unsigned int
//
// Returned:    pointer to a new unsigned int
//***************************************************************************
//int cantThrowException (char data) noexcept;
unsigned int *riskyException (int param) noexcept(false)
{
  CS485Exception cException;

  unsigned int *pRetVal = new unsigned int;

  if (0 > param)
  {
    throw std::range_error ("Negative value!");
  }

  *pRetVal = param;

  return pRetVal;
}

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
  std::bad_alloc cNotAString;

  unsigned int *pUInt = nullptr;

  int *paValues;
  int size = -1;

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

  try
  {
    pUInt = riskyException (-9);
  }
  catch (const std::range_error &e)
  {
    std::cout << e.what () << std::endl;
  }

  try
  {
    pUInt = riskyException (-9);
  }
  catch (const std::exception &e)
  {
    std::cout << e.what () << std::endl;
  }

  //throw CS485Exception (0);

  return EXIT_SUCCESS;
}