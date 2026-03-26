#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>
template <typename T> typename T::iterator easyFind(T t, int needle)
{

  typename T::iterator it = t.begin();
  typename T::iterator ite = t.end();
  typename T::iterator val;

  val = std::find(it, ite, needle);
  if (val != ite)
  {
    return (val);
  }
  else
  {
    throw std::exception();
  }
}

#endif
