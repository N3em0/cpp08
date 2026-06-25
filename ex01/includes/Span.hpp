#ifndef SPAN_HPP
#define SPAN_HPP

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
  template <typename T> void addNumbers(T begin, T end)
  {
    std::ptrdiff_t dist = std::distance(begin, end);
    if (this->vec_.size() + dist > this->N)
      throw fullContainerException();
    this->vec_.insert(this->vec_.begin(), begin, end);
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

#endif
