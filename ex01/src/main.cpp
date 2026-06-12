#include "Span.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>

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
    // sp.addNumbers(5);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << "\n===================== addNumbers TEST\n\n";
  try
  {
    Span sp = Span(10);
    sp.addNumbers(10);
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
    sp.addNumbers(10000);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
