#pragma once

/*
Container type :
  Multiset (ordered container, multiple occurence of same element)
shortestSpan() :
  std::adjacent_find -> Return 0 si y'a pas deux valeurs egale (supprime la
possibilite) AddNumbers() : std::generate (mymuset.begin(), mymuset.end(),
RandomNumber); AddNumber() : mymuset.insert(number)
*/

#include <exception>
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
  void addNumbers(int size);

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
      return ("Container is full, can't add more numbers");
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
