#pragma once

#include <iostream>


class bigger
{
public:

  bigger() { std::cout << "ctor\n"; }

  /*explicit*/ bigger(int x) :mData(x) { std::cout << "ctor(int)\n"; }

  ~bigger() { std::cout << "dtor\n"; }

  bigger(const bigger&rcData)
  {
    std::cout << "cctor\n"; mData = rcData.mData;
  }

  bigger& operator=(const bigger&rcData)
  {
    std::cout << "op=\n"; mData = rcData.mData; return *this;
  }

private:
  int mData = 0;
};
