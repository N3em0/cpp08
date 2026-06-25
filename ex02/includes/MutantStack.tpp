#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack() {}
template <typename T> MutantStack<T>::MutantStack(const MutantStack &src) { *this = src; }
template <typename T> MutantStack<T> &MutantStack<T>::operator=(const MustantStack<T> &rhs)
{
  if (this != &rhs)
  {
    *this = rhs;
  }
}

#endif
