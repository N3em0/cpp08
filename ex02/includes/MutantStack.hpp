#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

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
public:
  MutantStack();
  MutantStack(const MutantStack &src);
  MutantStack &operator=(const MutantStack &rhs);

  void empty(T t);
  void size();
  void top();
  void push();
  void emplace();
  void pop();
  void swap();

  ~MutantStack();
};

#endif
