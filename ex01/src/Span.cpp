#include "Span.hpp"
#include <algorithm> // generate_n, adjacent_find
#include <cstdlib>   // std::rand
#include <numeric>   // adjacent_difference
#include <vector>

Span::Span() : N(0) {}

Span::Span(unsigned int number) : N(number) { this->vec_.reserve(this->N); }

Span::Span(Span const &src) : N(src.N) {}

Span &Span::operator=(Span const &rhs)
{
  if (this != &rhs)
    this->N = rhs.N;
  return (*this);
}

void Span::addNumber(int number)
{
  if (this->vec_.size() == this->N)
    throw fullContainerException();
  this->vec_.push_back(number);
}

static int randomNumber() { return (std::rand()); }

void Span::addNumbers(int size)
{
  if (this->vec_.size() + size > this->N)
    throw fullContainerException();
  std::generate_n(std::back_inserter(this->vec_), size, randomNumber);
}

unsigned int Span::shortestSpan()
{
  std::vector<int> span(this->vec_.size());
  if (this->vec_.empty())
    throw Span::emptyContainerException();
  if (this->vec_.size() == 1)
    throw Span::oneNumberException();
  if (std::adjacent_find(this->vec_.begin(), this->vec_.end()) !=
      this->vec_.end())
    return (0);
  std::sort(this->vec_.begin(), this->vec_.end());
  std::adjacent_difference(this->vec_.begin(), this->vec_.end(), span.begin());
  std::vector<int>::iterator min = std::min_element(span.begin(), span.end());
  return (*min);
}

unsigned int Span::longestSpan()
{
  if (this->vec_.empty())
    throw Span::emptyContainerException();
  if (this->vec_.size() == 1)
    throw Span::oneNumberException();
  std::sort(this->vec_.begin(), this->vec_.end());
  std::vector<int>::iterator begin = this->vec_.begin();
  std::vector<int>::iterator end = this->vec_.end();
  end--;
  return (*end - *begin);
}

Span::fullContainerException::fullContainerException() {}
Span::oneNumberException::oneNumberException() {}
Span::emptyContainerException::emptyContainerException() {}

Span::~Span() {}
