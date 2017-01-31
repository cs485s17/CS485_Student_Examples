//***************************************************************************
// File name:  bigger.cpp
// Author:     Chadd Williams
// Date:       1/31/2017
// Class:      CS485
// Assignment: Constructor Examples
// Purpose:    Demonstrate how constructors and assignment operator are called
//***************************************************************************

#include "bigger.h"

//***************************************************************************
// Constructor: bigger
//
// Description: sets mID and prints a message.
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
bigger::bigger ()
{
  mID = getID ();
  std::cout << "ctor " << mID << "\n";
}

//***************************************************************************
// Constructor: bigger
//
// Description: sets mID, sets mData to the parameter, and prints a message.
//
// Parameters:  x – the number to set to mDaa
//
// Returned:    None
//***************************************************************************
bigger::bigger (int x) :mData (x)
{
  mID = getID ();
  mData = x;
  std::cout << "ctor(int) " << mID << "\n";
}

//***************************************************************************
// Constructor: bigger
//
// Description: copies the mData value from the parameter and prints a message
//              a unique ID is generated.
//
// Parameters:  rcData – the object to be copied
//
// Returned:    None
//***************************************************************************
bigger::bigger (const bigger& rcData)
{
  mID = getID ();
  mData = rcData.mData;
  std::cout << "cctor " << mID << "\n";
}

//***************************************************************************
// Destructor:  bigger
//
// Description: prints a message.
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
bigger::~bigger ()
{
  std::cout << "dtor " << mID << "\n";
}


//***************************************************************************
// Function:    operator=
//
// Description: Sets mData to the value in the parameter. Prints a message
//
// Parameters:  rcData   - the object to copy
//
// Returned:    the object operator= is called on.
//***************************************************************************
bigger& bigger::operator=(const bigger& rcData)
{
  std::cout << "op= " << mID << "\n";
  mData = rcData.mData;
  return *this;
}

//***************************************************************************
// Function:    getID
//
// Description: Generate a unique integer id.
//
// Parameters:  None
//
// Returned:    int - the id
//***************************************************************************
int bigger::getID () const
{
  static int id = 0;

  return id++;
}