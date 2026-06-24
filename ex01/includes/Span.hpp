#pragma once

/*
Container type :
  Multiset (ordered container, multiple occurence of same element)
shortestSpan() :
  std::adjacent_find -> Return 0 si y'a pas deux valeurs egale (supprime la
possibilite) AddNumbers() : std::generate (mymuset.begin(), mymuset.end(),
RandomNumber); AddNumber() : mymuset.insert(number)
*/

#include <algorithm>
#include <cstddef>
#include <exception>
#include <iterator>
#include <vector>

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
  void addNumber(int number);
  // void generateNumbers(int size);
  int randomNumber();
  /* DO STATIC IN MAIN | PARAMETERS : CONTAINER, CONTAINER SIZE) */
  // template <typename C> C generateNumbers(int size)
  // {
  //   if (this->vec_.size() + size > this->N)
  //     throw fullContainerException();
  //   std::generate_n(std::back_inserter(this->vec_), size, randomNumber);
  // }
  template <typename T> void addNumbers(T begin, T end)
  {
    std::ptrdiff_t dist = std::distance(begin, end);
    if (this->vec_.size() + dist > this->N)
      throw fullContainerException();
    this->vec_.insert(this->vec_.rbegin(), begin, end);
  }

  class emptyContainerException : public std::exception
  {
  public:
    emptyContainerException();
    virtual const char *what() const throw() { return ("Container is empty"); }
  };

  class fullContainerException : public std::exception
  {
  public:
    fullContainerException();
    virtual const char *what() const throw()
    {
      return (
          "Container requires more space to handle this quantity of values");
    }
  };

  class oneNumberException : public std::exception
  {
  public:
    oneNumberException();
    virtual const char *what() const throw()
    {
      return ("Container has only 1 number");
    }
  };

private:
  unsigned int N;
  std::vector<int> vec_;
};
