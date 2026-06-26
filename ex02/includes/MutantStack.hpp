#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

public:
  MutantStack();
  MutantStack(const MutantStack<T, Container> &src);
  MutantStack &operator=(const MutantStack<T, Container> &rhs);
  typedef typename std::stack<T, Container>::container_type::iterator iterator;
  typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;
  typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
  typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
  iterator begin();
  iterator end();
  reverse_iterator rbegin();
  reverse_iterator rend();
  const_iterator cbegin();
  const_iterator cend();
  const_reverse_iterator crbegin();
  const_reverse_iterator crend();
  ~MutantStack();
};

#include "MutantStack.tpp"

#endif
