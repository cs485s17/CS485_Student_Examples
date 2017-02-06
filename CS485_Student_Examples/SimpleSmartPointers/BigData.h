//***************************************************************************
// File name:  BigData.h
// Author:     Chadd Williams
// Date:       2/3/2017
// Class:      CS485
// Assignment: Copy And Swap Example
// Purpose:    Demonstrate how CopyAndSwap is implemented
//***************************************************************************
#pragma once
#include <iostream>

class bigData
{
public:

	bigData();
	bigData(int data);
	~bigData();
	bigData(const bigData &rcData);

	//bigData& operator=(const bigData &rcData);

	// you cannot declare both operator= at the same time!
	bigData& operator=(bigData cData); //force copy constructor to be called

	friend std::ostream& operator<<(std::ostream& out, const bigData &rcData);

private:
	int *mpHugeData = nullptr;
	int mID;

	int getID();
};