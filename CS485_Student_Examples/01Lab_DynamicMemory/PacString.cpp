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
	this->mpszData[length] = NULL;
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
	this->mpszData[length] = NULL;
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

	this->mpszData[length] = NULL;
	return *this;
}

ostream& operator<< (std::ostream &out, const PacString &rcData)
{
	for (int i = 0; NULL != rcData.mpszData [i]; i++)
	{
		out << rcData.mpszData [i];
	}

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

	this->mpszData[newLength] = NULL;

	delete [] pszNewData;

	return *this;
}

PacString PacString::operator+(const PacString &rcData) const
{
	/*int thisLength = static_cast <int> (strlen(this->mpszData));
	int dataLength = static_cast <int> (strlen(rcData.mpszData));
	int newLength = thisLength + dataLength + 1;
	PacString cNewData;
	cNewData.mpszData = new char[newLength];

	for (int i = 0; i < thisLength; i++)
	{
		cNewData.mpszData[i] = this->mpszData[i];
	}

	for (int j = 0; j < dataLength; j++)
	{
		cNewData.mpszData [j + thisLength] = rcData.mpszData [j];
	}

	cNewData.mpszData[newLength] = NULL;

	return cNewData;*/
	string s, s2;
	stringstream ss;
	PacString cNewData;

	char *temp = new char;

	strcpy_s(temp, strlen(mpszData + 1) * sizeof(char), mpszData);
	strcpy_s(temp + strlen(mpszData), (strlen(rcData.mpszData) + 1) * sizeof(char), rcData.mpszData);


/*
	ss << mpszData;
	ss >> s;
	ss.clear();
	ss << rcData.mpszData;
	ss >> s2;

	s += s2;

	ss << s2;

	ss >> cNewData.mpszData;*/

	return temp;
}