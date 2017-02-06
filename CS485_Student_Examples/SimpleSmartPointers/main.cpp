//***************************************************************************
// File name:  main.cpp
// Author:     Chadd Williams
// Date:       2/3/2017
// Class:      CS485
// Assignment: Dynamic Memory Example
// Purpose:    Demonstrate dynamic memory, pointers, const, nullptr
//***************************************************************************


#include <iostream>
#include <memory>
#include "BigData.h"



int main()
{

	// unique_ptr
	std::unique_ptr<bigData> pBigData(new bigData(42));

	auto pBigDataAgain(std::make_unique<bigData>(bigData(41)));

	std::cout << *pBigData << std::endl;

	std::cout << *pBigDataAgain << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;




	// shared_ptr
	std::shared_ptr<bigData> pBigDataShared(new bigData(7));

	auto pBigDataSecondShared = pBigDataShared;


	std::cout << *pBigDataShared << std::endl;

	std::cout << *pBigDataSecondShared << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	pBigDataSecondShared = nullptr;
	std::cout << *pBigDataShared << std::endl;
	pBigDataShared = std::make_shared<bigData>(bigData(8));

	std::cout << std::endl;

	std::cout << "Just set both shared pointers to new values";

	std::cout << std::endl;

	std::cout << *pBigDataShared << std::endl;

	std::cout << std::endl;

	// delete of pBigData is not necessary since the
	// unique_ptr handles that.

	return EXIT_SUCCESS;
}