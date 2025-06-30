#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type)
{
  this->type = type;
  std::cout << "AMateria constructor is called." << std::endl;
}

AMateria::~AMateria()
{
  std::cout << "AMateria destructor is called." << std::endl;
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
  std::cout << "AMateria copy constructor is called." << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
  (void)other;
  return *this;
}

std::string const & AMateria::getType() const
{
  return this->type;
}

void AMateria::use(ICharacter& target)
{
  (void)target;
  std::cout << "AMateria::use is called" << std::endl;
}

AMateria* AMateria::clone() const
{
  return NULL;
}