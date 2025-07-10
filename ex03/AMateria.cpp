#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
  std::cout << "AMateria default constructor is called." << std::endl;
  type = "AMateria";
}

AMateria::AMateria(std::string const &type) : type(type)
{
  std::cout << "AMateria constructor with type parameter is called." << std::endl;
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
  if (this != &other)
  {
    setType(other.getType());
  }
  return *this;
}

std::string const & AMateria::getType() const
{
  std::cout << "AMateria's getType method is called" << std::endl;
  return this->type;
}

void  AMateria::setType(std::string type)
{
  std::cout << "AMateria's setType method is called" << std::endl;
  this->type = type;
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