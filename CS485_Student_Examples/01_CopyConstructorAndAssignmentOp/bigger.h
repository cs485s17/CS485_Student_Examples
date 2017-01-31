//***************************************************************************
// File name:  bigger.h
// Author:     Chadd Williams
// Date:       1/31/2017
// Class:      CS485
// Assignment: Constructor Examples
// Purpose:    Demonstrate how constructors and assignment operator are called
//***************************************************************************
#pragma once

#include <iostream>

class bigger
{
public:

  bigger ();

  /*explicit*/ bigger (int x);

  ~bigger ();

  bigger (const bigger&rcData);

  bigger& operator= (const bigger &rcData);
  
private:
  int mData = 0;
  int mID;

  int getID() const;
};
