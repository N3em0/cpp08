#include "Span.hpp"
#include <algorithm>
#include <cstdlib>
#include <exception>
#include <iostream>

static int randomNumber() { return (std::rand()); }

template <typename C> void generateNumbers(C &container, int size)
{
  std::generate_n(std::back_inserter(container), size, randomNumber);
}

int main()
{
  srand(time(NULL));
  std::cout << "\n===================== addNumber TEST\n\n";
  try
  {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << "\n===================== addNumbers TEST\n\n";
  try
  {
    Span sp = Span(10);
    std::vector<int> v;
    generateNumbers(v, 10);
    sp.addNumbers(v.begin(), v.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << "\n===================== 10 000 TEST\n\n";
  try
  {
    Span sp = Span(10000);
    std::vector<int> v;
    generateNumbers(v, 10000);
    sp.addNumbers(v.begin(), v.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
