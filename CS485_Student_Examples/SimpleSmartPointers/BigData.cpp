//***************************************************************************
// File name:  BigData.cpp
// Author:     Chadd Williams
// Date:       2/3/2017
// Class:      CS485
// Assignment: Copy And Swap Example
// Purpose:    Demonstrate how CopyAndSwap is implemented
//***************************************************************************
#include "BigData.h"
#include <utility> //necessary for std::swap

//***************************************************************************
// Constructor: bigData
//
// Description: Initialize the ID
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
bigData::bigData()
{
	mID = getID();
	//std::cout << "ctor " << *this << std::endl;
}

//***************************************************************************
// Constructor: bigData
//
// Description: Initialize the ID and allocate dynamic memory for the int
//              passed as an argument
//
// Parameters:  data – the int to store
//
// Returned:    None
//***************************************************************************
bigData::bigData(int data)
{
	mID = getID();
	mpHugeData = new int;
	*mpHugeData = data;
	//std::cout << "ctor(int) " << *this << std::endl;
}

//***************************************************************************
// destructor: bigData
//
// Description: Deallocate dynamic memory
//
// Parameters:  None
//
// Returned:    None
//***************************************************************************
bigData::~bigData()
{
	std::cout << "dtor: " << *this << std::endl;
	delete mpHugeData;
}

//***************************************************************************
// Constructor: bigData
//
// Description: Copy Constructor
//
// Parameters:  rcData - the object to copy
//
// Returned:    None
//***************************************************************************
bigData::bigData(const bigData &rcData)
{
	mID = getID();

	if (nullptr != rcData.mpHugeData)
	{
		mpHugeData = new int;
		*mpHugeData = *rcData.mpHugeData;
	}
	//std::cout << "cctor " << *this << std::endl;

}


//***************************************************************************
// Function:    operator=
//
// Description: Copy Assignment Operator
//
// Parameters:  cData - the object to copy
//
// Returned:    bigData& - the object called upon
//***************************************************************************
bigData& bigData::operator=(bigData cData)
{
	//http://en.cppreference.com/w/cpp/algorithm/swap
	using std::swap;

	// optionally, you could pass the parameter by reference
	// then call the copy constructor to make the copy
	// bigData cData(rcData);

	swap(mpHugeData, cData.mpHugeData);

	return *this;
}
//***************************************************************************
// Function:    operator<<
//
// Description: The insertion operator
//
// Parameters:  out - the stream to write to
//              rcData - the object to write
//
// Returned:    ostream - the stream written to
//***************************************************************************
std::ostream& operator<<(std::ostream& out, const bigData &rcData)
{
	out << "mID: " << rcData.mID << " mpHugeData: ";
	if (nullptr != rcData.mpHugeData)
	{
		out << *rcData.mpHugeData;
	}
	else
	{
		out << "nullptr";
	}
	return out;
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
int bigData::getID()
{
	static int id = 0;

	return id++;
}