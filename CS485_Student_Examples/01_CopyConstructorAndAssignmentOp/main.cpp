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

void foo(bigger b4)
{
}

bigger bar(bigger b5)
{
  return b5;
}

int main()
{

  cout << "b1\n";
  bigger b1;
  cout << "end b1\n";

  cout << "b2\n";
  bigger b2(b1);
  cout << "end b2\n";

  cout << "b3\n";
  bigger b3 = b1;
  cout << "end b3\n";

  cout << "b6\n";
  bigger b6;
  cout << "end b6\n";

  cout << "foo\n";
  foo(b1);
  cout << "end foo\n";

  cout << "bar\n";
  b6 = bar(b1);
  cout << "end bar\n";

  cout << "b7\n";
  bigger b7 = 1;
  cout << "end b7\n";
}