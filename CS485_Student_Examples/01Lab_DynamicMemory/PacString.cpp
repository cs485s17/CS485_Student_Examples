#include "PacString.h"

PacString::PacString()
{
	mpszData = new char;
}

PacString::PacString(const char * pszString)
{
}

PacString::PacString(const PacString & rcData)
{
	if (nullptr != rcData.mpszData)
	{
		mpszData = new char;
		*mpszData = *rcData.mpszData;
	}
}

PacString::~PacString()
{
}

PacString & PacString::operator=(PacString rcData)
{
	using std::swap;

	std::cout << mpszData;

	swap(mpszData, rcData.mpszData);

	return *this;
}

PacString & PacString::operator+=(const PacString & rcData)
{
	// TODO: insert return statement here
	return *this;
}

//PacString PacString::operator+(const PacString & rcData) const
//{
//	return PacString();
//}

std::ostream & operator<<(std::ostream & out, const PacString & rcData)
{
	if (nullptr != rcData.mpszData)
	{
		out << *rcData.mpszData;
	}
	else
	{
		out << "nullptr";
	}
	return out;
}
