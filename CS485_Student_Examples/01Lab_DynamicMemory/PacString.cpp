#include "PacString.h"
#include <utility>
#include <string>
#include <sstream>

using namespace std;

PacString::PacString()
{
	this->mpszData = new char [1];

	this->mpszData[0] = NULL;
}

PacString::PacString(const char *pszString)
{
	int length = static_cast <int> (strlen(pszString)) + 1;
	delete [] this->mpszData;

	this->mpszData = new char [length];

	for (int i = 0; i < length; i++)
	{
		this->mpszData [i] = pszString [i];
	}
	this->mpszData[length - 1] = NULL;
}

PacString::PacString(const PacString &rcData)
{
	int length = static_cast <int> (strlen(rcData.mpszData)) + 1;
	delete [] this->mpszData;

	this->mpszData = new char [length];

	for (int i = 0; i < length; i++)
	{
		this->mpszData [i] = rcData.mpszData [i];
	}
	this->mpszData[length - 1] = NULL;
}

PacString::~PacString()
{
	delete [] this->mpszData;
}

PacString& PacString::operator=(PacString rcData)
{
	int length = static_cast <int> (strlen(rcData.mpszData)) + 1;
	delete [] mpszData;

	this->mpszData = new char [strlen (rcData.mpszData)];

	swap (this->mpszData, rcData.mpszData);

	this->mpszData[length - 1] = NULL;
	return *this;
}

ostream& operator<< (std::ostream &out, const PacString &rcData)
{
	out << rcData.mpszData;

	return out;
}

PacString& PacString::operator+=(const PacString &rcData)
{
	int thisLength = static_cast <int> (strlen(this->mpszData));
	int dataLength = static_cast <int> (strlen(rcData.mpszData));
	int newLength = thisLength + dataLength + 1;
	char *pszNewData = new char[newLength];
	
	for (int i = 0; i < thisLength; i++)
	{
		pszNewData[i] = this->mpszData[i];
	}

	for (int j = 0; j < dataLength; j++)
	{
		pszNewData [j + thisLength] = rcData.mpszData [j];
	}

	delete[] this->mpszData;
	this->mpszData = new char[newLength];

	for (int i = 0; i < newLength; i++)
	{
		this->mpszData[i] = pszNewData[i];
	}

	mpszData [newLength - 1] = NULL;

	delete [] pszNewData;

	return *this;
}

PacString PacString::operator+(const PacString &rcData) const
{
	PacString cTemp = mpszData;
	
	cTemp += rcData.mpszData;

	return cTemp;
}