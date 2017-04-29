//***************************************************************************
// File name:  PacString.cpp
// Author:     
// Date:       2/3/2017
// Class:      CS485
// Assignment: Dynamic Memory Lab
// Purpose:    
//***************************************************************************

#include "PacString.h"
#include <iostream>
#include <utility>

PacString::PacString()
{

}

PacString::PacString(const char *pszString)
{
	for (int i = 0; i < strlen(pszString) + 1; i++)
	{
		mpszData[i] = pszString[i];
	}
}

PacString::PacString(const PacString &rcData)
{
	//char *pszTemp = rcData.mpszData;
	//mpszData = pszTemp;

	for (int i = 0; i < strlen(rcData.mpszData) + 1; i++)
	{
		mpszData[i] = rcData.mpszData[i];
	}
}


//PacString& PacString::operator=(const PacString &rcData)
//{
//	mpszData = rcData.mpszData;
//}

PacString& PacString::operator=(PacString rcData)
{
	using std::swap;
	swap(mpszData, rcData.mpszData);

	return *this;
}

std::ostream& operator<<(std::ostream &out, const PacString &rcData)
{
	return std::cout << rcData.mpszData;
}


PacString& PacString::operator+=(const PacString &rcData)
{
	PacString temp;

	//temp.mpszData =

	return temp;
}

PacString PacString::operator+(const PacString &rcData) const
{
	PacString temp;
	return temp;
}