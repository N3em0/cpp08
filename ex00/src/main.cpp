#include "easyfind.hpp"

#include <deque>
#include <exception>
#include <iostream>
#include <list>
#include <vector>

int main()
{
  try
  {
    std::vector<int> vint;
    vint.push_back(1);
    vint.push_back(2);
    vint.push_back(3);
    std::cout << "========== easyfind : 3" << std::endl;
    std::cout << *(easyFind(vint, 3)) << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << ". No occurence of needle in the vector"
              << std::endl;
  }

  try
  {
    std::deque<int> dint;
    dint.push_back(4);
    dint.push_back(5);
    dint.push_back(6);
    std::cout << "========== easyfind : 3" << std::endl;
    std::cout << *(easyFind(dint, 3)) << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << ". No occurence of needle in the deque"
              << std::endl;
  }

  try
  {
    std::list<int> lint;
    std::list<char> lchar;
    lint.push_back(-2);
    lint.push_back(-3);
    lint.push_back(-4);
    lchar.push_back('c');
    lchar.push_back('d');
    lchar.push_back('e');
    std::cout << "========== easyfind : -3" << std::endl;
    std::cout << *(easyFind(lint, -3)) << std::endl;
    std::cout << "========== easyfind : f" << std::endl;
    std::cout << *(easyFind(lchar, 'f')) << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << ". No occurence of needle in the list"
              << std::endl;
  }
}
