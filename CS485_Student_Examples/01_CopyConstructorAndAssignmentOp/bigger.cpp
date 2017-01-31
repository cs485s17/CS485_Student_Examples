//***************************************************************************
// File name:  bigger.cpp
// Author:     Chadd Williams
// Date:       1/31/2017
// Class:      CS485
// Assignment: Constructor Examples
// Purpose:    Demonstrate how constructors and assignment operator are called
//***************************************************************************

#include "bigger.h"

bigger::bigger ()
{
  mID = getID ();
  std::cout << "ctor " << mID << "\n";
}

bigger::bigger (int x) :mData (x)
{
  mID = getID ();
  std::cout << "ctor(int)" << mID << "\n";
}

bigger::~bigger ()
{
  std::cout << "dtor" << mID << "\n";
}

bigger::bigger (const bigger&rcData)
{
  mID = getID ();
  std::cout << "cctor" << mID << "\n"; mData = rcData.mData;
}

bigger& bigger::operator=(const bigger&rcData)
{
  std::cout << "op=" << mID << "\n";
  mData = rcData.mData;
  return *this;
}

int bigger::getID () const
{
  static int id = 0;

  return id++;
}