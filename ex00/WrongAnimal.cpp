#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
  std::cout << "WrongAnimal default constructor is called." << std::endl;
  setType("WrongAnimal");
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
  std::cout << "WrongAnimal copy constructor is called." << std::endl;
  *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
  std::cout << "WrongAnimal copy assignment operator is called" << std::endl;
  if (this != &other)
  {
    setType(other.getType());
  }
  return *this;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal destructor called!" << std::endl;
}

std::string WrongAnimal::getType() const
{
  return type;
}

void WrongAnimal::setType(std::string newType)
{
  type = newType;
}

void WrongAnimal::makeSound() const
{
  std::cout << "Making WrongAnimal sounds" << std::endl;
}

