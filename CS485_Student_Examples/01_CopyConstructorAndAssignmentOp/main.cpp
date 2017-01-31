//***************************************************************************
// File name:  main.cpp
// Author:     Chadd Williams
// Date:       1/31/2017
// Class:      CS485
// Assignment: Constructor Examples
// Purpose:    Demonstrate how constructors and assignment operator are called
//***************************************************************************

#include <iostream>
#include "bigger.h"

using namespace std;

//***************************************************************************
// Function:    foo
//
// Description: Demonstrate pass by value
//
// Parameters:  b4 - the object passed in by value
//
// Returned:    None
//***************************************************************************
void foo (bigger b4)
{
}

//***************************************************************************
// Function:    bar
//
// Description: Demonstrate pass by value and return by value
//
// Parameters:  b5 - the object passed in by value
//
// Returned:    bigger - a copy of the parameter
//***************************************************************************
bigger bar (bigger b5)
{
  return b5;
}

//***************************************************************************
// Function:    main
//
// Description: Demonstrate how constructors, destructors, and operator=
//              are invoked.
//
// Parameters:  None
//
// Returned:    int - EXIT_SUCCESS
//***************************************************************************
int main ()
{

  cout << "b1\n";
  bigger b1;
  cout << "end b1\n\n";

  cout << "b2\n";
  bigger b2 (b1);
  cout << "end b2\n\n";

  cout << "b3\n";
  bigger b3 = b1;
  cout << "end b3\n\n";

  cout << "b6\n";
  bigger b6;
  cout << "end b6\n\n";

  cout << "foo\n";
  foo (b1);
  cout << "end foo\n\n";

  cout << "bar\n";
  b6 = bar (b1);
  cout << "end bar\n\n";

  cout << "b7\n";
  bigger b7 = 1;
  cout << "end b7\n\n";

  cout << "b8\n";
  foo (1);
  cout << "end b8\n\n";

  return EXIT_SUCCESS;
}