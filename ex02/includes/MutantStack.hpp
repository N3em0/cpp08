#ifndef
#define MUTANTSTACK_HPP

class MutantStack
{
private:
public:
  MutantStack();
  MutantStack(const Mutantstack &src);
  MutantStack &operator=(const MutantStack &rhs);
  ~MutantStack();
}
