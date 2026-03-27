#include "easyfind.hpp"

#include <deque>
#include <exception>
#include <iostream>
#include <list>
#include <vector>

/*
 Maybe add some tests like :
  - vector of vector (std::vector<std::vector> vvec;)
*/

int main()
{
  std::vector<int> vint;
  vint.push_back(1);
  vint.push_back(2);
  vint.push_back(3);
  try
  {
    std::cout << *(easyFind(vint, 3)) << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << ". No occurence of needle in the vector"
              << std::endl;
  }

  std::deque<int> dint;
  dint.push_back(4);
  dint.push_back(5);
  dint.push_back(6);
  try
  {
    std::cout << *(easyFind(dint, 3)) << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << ". No occurence of needle in the deque"
              << std::endl;
  }

  std::list<int> lint;
  std::list<char> lchar;
  lint.push_back(-2);
  lint.push_back(-3);
  lint.push_back(-4);
  lchar.push_back('c');
  lchar.push_back('d');
  lchar.push_back('e');
  try
  {
    std::cout << *(easyFind(lint, -3)) << std::endl;
    std::cout << *(easyFind(lchar, 'f')) << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << ". No occurence of needle in the list"
              << std::endl;
  }
}
