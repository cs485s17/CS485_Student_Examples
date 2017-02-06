//***************************************************************************
// File name:  main.cpp
// Author:     Chadd Williams
// Date:       2/3/2017
// Class:      CS485
// Assignment: Dynamic Memory Example
// Purpose:    Demonstrate dynamic memory, pointers, const, nullptr
//***************************************************************************

#include <iostream>

//***************************************************************************
// Function:    testConstWithPointer_One
//
// Description: take a parameter that is a pointer to a const int
//
// Parameters:  pData - pointer to const int.
//
// Returned:    none.
//***************************************************************************
void testConstWithPointer_One(const int *pData)
{
	int intValue = 3;

	// *pData = 3;   // error, the int pointed to is const

	pData = new int; // LEGAL! but a bad idea.

	// *pData = 4;   // error, the int is still a const

	delete pData;    // LEGAL! but a bad idea.

	pData = &intValue;
}

//***************************************************************************
// Function:    testConstWithPointer_Two
//
// Description: take a parameter that is a pointer to a const int
//
// Parameters:  pData - pointer to const int.
//
// Returned:    none.
//***************************************************************************
void testConstWithPointer_Two(int const *pData)
{
	int intValue = 3;

	//*pData = 3;     // error, the int pointed to is const

	pData = new int;  // LEGAL! but a bad idea.

	//*pData = 4;     // error, the int is still a const

	delete pData;     // LEGAL! but a bad idea.

	pData = &intValue;
}

//***************************************************************************
// Function:    testConstWithPointer_Three
//
// Description: take a parameter that is a const pointer to an int
//
// Parameters:  pData - const pointer to int.
//
// Returned:    none.
//***************************************************************************
void testConstWithPointer_Three(int * const pData)
{
	int intValue = 3;

	*pData = 3; 

	//pData = new int; // error, the pointer address is const

	*pData = 4;

	delete pData; // LEGAL! but a bad idea.

	//pData = &intValue; // error, the pointer address is const

}

//***************************************************************************
// Function:    testConstWithPointer_Four
//
// Description: take a parameter that is a const pointer to a const int
//
// Parameters:  pData - const pointer to const int.
//
// Returned:    none.
//***************************************************************************
void testConstWithPointer_Four(const int * const pData)
{
	int intValue = 3;

	//*pData = 3; // error, the int pointed to is const

	//pData = new int;  // error, the pointer address is const

	//*pData = 4; // error, the int is still a const

	delete pData; // LEGAL! but a bad idea.

	//pData = &intValue; // error, the pointer address is const
}

int main()
{
	auto ptr = NULL;
	auto ptr2 = nullptr;

	int *paBigData = new int[100];

	paBigData[0] = 42;

	delete[] paBigData;
	paBigData = nullptr;

	std::cout << typeid(ptr).name() << std::endl;
	std::cout << typeid(nullptr).name() << std::endl;
}