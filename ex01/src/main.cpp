#include "Span.hpp"
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <exception>
#include <iostream>

static int randomNumber() { return (std::rand()); }

template <typename C> static void generateNumbers(C &container, int size)
{
  std::generate_n(std::back_inserter(container), size, randomNumber);
}

int main()
{
  srand(time(NULL));
  std::cout
      << "\n===================== addNumber TEST =====================\n\n";
  try
  {
    Span sp = Span(5);
    sp.addNumber(INT_MIN);
    sp.addNumber(INT_MAX);
    // sp.addNumber(INT_MIN + 6);
    // sp.addNumber(INT_MAX - 6);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "ShortestSpan : " << sp.shortestSpan() << std::endl;
    std::cout << "LongestSpan : " << sp.longestSpan() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout
      << "\n===================== addNumbers TEST =====================\n\n ";
  try
  {
    Span sp = Span(10);
    std::vector<int> v;
    generateNumbers(v, 100);
    sp.addNumbers(v.begin(), v.end());
    std::cout << "ShortestSpan : " << sp.shortestSpan() << std::endl;
    std::cout << "LongestSpan : " << sp.longestSpan() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << "\n===================== 10 000 TEST =====================\n\n ";
  try
  {
    Span sp = Span(10000);
    std::vector<int> v;
    generateNumbers(v, 10000);
    sp.addNumbers(v.begin(), v.end());
    std::cout << "ShortestSpan : " << sp.shortestSpan() << std::endl;
    std::cout << "LongestSpan  : " << sp.longestSpan() << std::endl;
    std::cout
        << "\n=======================================================\n\n";
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
