#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
  std::cout << "Cure constructor is called." << std::endl;
}

Cure::~Cure()
{
  std::cout << "Cure destructor is called." << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
  std::cout << "Cure copy constructor is called." << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
  std::cout << "Cure copy assignment operator is called." << std::endl;
  if (this != &other)
  {
    AMateria::operator=(other);
  }
  return *this;
}

Cure* Cure::clone() const
{
  return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}