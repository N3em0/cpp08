#include <set>
#include <iostream>
#include <algorithm>

int main(){
  std::multiset<int> mset;
  mset.insert(4);
  mset.insert(3);

  std::multiset<int>::iterator it;

  for (it = mset.begin(); it != mset.end(); it++)
    std::cout << "[" << *it << "]";
  std::cout << std::endl;
}
