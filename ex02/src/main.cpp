#include "MutantStack.hpp"
#include <exception>
#include <iostream>
#include <list>

int main()
{
  try
  {
    std::cout << "========== MutantStack tests" << std::endl;
    MutantStack<int> mstack;
    mstack.push(4);
    mstack.push(17);
    std::cout << "top  : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size : " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    MutantStack<int>::const_iterator cit = mstack.cbegin();
    MutantStack<int>::const_iterator cite = mstack.cend();
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    MutantStack<int>::const_reverse_iterator crit = mstack.crbegin();
    MutantStack<int>::const_reverse_iterator crite = mstack.crend();
    std::cout << "========== iterator begin print" << std::endl;
    std::cout << *(++it) << std::endl;
    std::cout << *(--it) << std::endl;
    std::cout << "========== iterator end print" << std::endl;
    std::cout << *(--ite) << std::endl;
    std::cout << "========== const_iterator begin print" << std::endl;
    std::cout << *(++cit) << std::endl;
    std::cout << *(--cit) << std::endl;
    std::cout << "========== const_iterator end print" << std::endl;
    std::cout << *(--cite) << std::endl;
    std::cout << "========== reverse_iterator begin print" << std::endl;
    std::cout << *(++rit) << std::endl;
    std::cout << *(--rit) << std::endl;
    std::cout << "========== reverse_iterator end print" << std::endl;
    std::cout << *(--rite) << std::endl;
    std::cout << "========== const_reverse_iterator begin print" << std::endl;
    std::cout << *(++crit) << std::endl;
    std::cout << *(--crit) << std::endl;
    std::cout << "========== const_reverse_iterator end print" << std::endl;
    std::cout << *(--crite) << std::endl;
    // *cit += 1;
    // std::cout << *cit << std::endl;
    std::cout << "========== all stack print" << std::endl;
    ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
      std::cout << *it << std::endl;
      ++it;
    }
    std::stack<int> s(mstack);
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  try
  {
    std::cout << "========== std::list tests" << std::endl;
    std::list<int> lst;
    lst.push_back(4);
    lst.push_back(17);
    std::cout << "top  : " << lst.back() << std::endl;
    lst.pop_back();
    std::cout << "size : " << lst.size() << std::endl;
    std::cout << "========== all list print" << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    std::list<int>::iterator it = lst.begin();
    std::list<int>::iterator ite = lst.end();
    ++it;
    --it;
    while (it != ite)
    {
      std::cout << *it << std::endl;
      ++it;
    }
    std::list<int> s(lst);
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  return (0);
}
