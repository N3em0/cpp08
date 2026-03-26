#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>
// NE PAS RETOURNER UN INT MAIS BIEN L INDEX DONC L ITERATOR
template <typename T> int easyFind(T t, int needle)
{

  typename T::iterator it = t.begin();
  typename T::iterator ite = t.end();
  typename T::iterator val;

  val = std::find(it, ite, needle);
  if (val != ite)
  {
    return (*val);
  }
  else
  {
    throw std::exception();
  }
}

#endif
