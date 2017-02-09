#include "PacString.h"
#include <utility>
#include <string>

using namespace std;

PacString::PacString()
{
	mpszData = new char;
}

PacString::PacString(const char *pszString)
{
	for (int i = 0; i < strlen(pszString); i++)
	{
		mpszData[i] = pszString[i];
	}
}

PacString::PacString(const PacString &rcData)
{
	for (int i = 0; i < strlen(rcData.mpszData); i++)
	{
		mpszData[i] = rcData.mpszData[i];
	}
}

PacString::~PacString()
{
	delete mpszData;
}

PacString& PacString::operator=(PacString rcData)
{
	swap (mpszData, rcData.mpszData);

	return *this;
}

std::ostream& operator<< (std::ostream &out, const PacString &rcData)
{
	for (int i = 0; NULL == rcData.mpszData [i]; i++)
	{
		out << rcData.mpszData[i];
	}

	return out;
}