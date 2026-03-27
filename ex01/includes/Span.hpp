#pragma once

/*
Container type :
  Multiset (ordered container, multiple occurence of same element)
shortestSpan() : 
  std::adjacent_find -> Return 0 si y'a pas deux valeurs egale (supprime la possibilite)
AddNumbers() :
  std::generate (mymuset.begin(), mymuset.end(), RandomNumber);
AddNumber() :
  mymuset.insert(number)
*/

#include <set>
#include <iostream>
#include <algorithm>

class Span
{
public:
  Span();
  Span(unsigned int N);
  Span(Span const &src);
  ~Span();

  Span &operator=(Span const &rhs);

  unsigned int shortestSpan();
  unsigned int longestSpan();
  void addNumber(unsigned int number);
  void addNumbers();

private:
  std::multiset<int> muset_;
}
