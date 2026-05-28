#include "Span.hpp"
#include <exception>
#include <iostream>

// int main()
// {
//   std::multiset<int> mset;
//   mset.insert(4);
//   mset.insert(3);
//
//   std::multiset<int>::iterator it;
//
//   for (it = mset.begin(); it != mset.end(); it++)
//     std::cout << "[" << *it << "]";
//   std::cout << std::endl;
// }

int main()
{
  try
  {
    Span sp = Span(5);
    sp.addNumber(6);
    std::cout << "caca" << std::endl;
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

  return 0;
}
