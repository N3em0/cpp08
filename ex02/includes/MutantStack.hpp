#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>

/*
 empty()
 size()
 top()
 push()
 emplace()
 pop()
 swap()
 ADD iterators() (const non const reverse)
*/

template <typename T> class MutantStack
{
private:
  std::deque<T> stack_;

public:
  MutantStack();
  MutantStack(const MutantStack &src);
  MutantStack &operator=(const MutantStack &rhs);

  bool empty() const;
  void size();
  void top();
  void push();
  void emplace();
  void pop();
  void swap();

  ~MutantStack();
};

#include "MutantStack.tpp"

#endif
