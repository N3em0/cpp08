
#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(){}
MutantStack<T>::MutantStack(const MutantStack &src): stack_(src.stack_){}
