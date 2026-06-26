#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"


template <typename T, typename Container> MutantStack<T, Container>::MutantStack() {}
template <typename T, typename Container> MutantStack<T, Container>::MutantStack(const MutantStack<T, Container> &src) { *this = src; }
template <typename T, typename Container> MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack<T, Container> &rhs)
{
  if (this != &rhs)
  {
    *this = rhs;
  }
  return(this);
}

template <typename T, typename Container> MutantStack<T, Container>::~MutantStack() {}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
  return (this->c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
  return (this->c.end());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rbegin()
{
  return (this->c.rbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rend()
{
  return (this->c.rend());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::cbegin()
{
  return (this->c.cbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::cend()
{
  return (this->c.cend());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::crbegin()
{
  return (this->c.crbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::crend()
{
  return (this->c.crend());
}

#endif
