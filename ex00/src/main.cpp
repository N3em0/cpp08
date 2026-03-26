#include "easyfind.hpp"

// #include <deque>
// #include <forward_list>
// #include <list>
#include <deque>
#include <exception>
#include <iostream>
#include <vector>

// template <typename T> int easyFind(T t, int needle)
// {
//   int *val;
//
//   val = std::find(t.begin(), t.end(), needle);
//   if (val != t.end())
//   {
//     throw std::exception();
//     return (-1);
//   }
//   else
//     return (*val);
// }

int main()
{
  // std::array<int, 3> arr1 = {1, 2, 3};
  // int arr2[3] = {1, 2, 3};
  std::vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);
  try
  {
    int v = easyFind(v1, 4);
    std::cout << v << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << "No occurence of needle in the vector" << std::endl;
  }

  std::deque<int> d1;
  d1.push_back(4);
  d1.push_back(5);
  d1.push_back(6);
  try
  {
    int v = easyFind(d1, 7);
    std::cout << v << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << "No occurence of needle in the deque" << std::endl;
  }
}
