#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

/*
 ADD iterators() (const non const reverse)
*/

template <typename T, typename Container>
class MutantStack : public std::stack<T, Container>
{

public:
  MutantStack();
  MutantStack(const MutantStack &src);
  MutantStack &operator=(const MutantStack &rhs);

  typename std::stack<T, Container>::iterator iterator;
  // iterator begin();
  // iterator end();
  // iterator

  ~MutantStack();
};

#include "MutantStack.tpp"

#endif
