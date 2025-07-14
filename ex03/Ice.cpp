#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
  std::cout << "Ice constructor is called." << std::endl;
}

Ice::~Ice()
{
  std::cout << "Ice destructor is called." << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
  std::cout << "Ice copy constructor is called." << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
  std::cout << "Ice copy assignment operator is called." << std::endl;
  if (this != &other)
  {
    AMateria::operator=(other);
  }
  return *this;
}

Ice* Ice::clone() const
{
  return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
