#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
  std::cout << "Animal default constructor is called." << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
  std::cout << "Animal copy constructor is called." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
  std::cout << "Animal copy assignment operator is called" << std::endl;
  if (this != &other)
  {
    setType(other.getType());
  }
  return *this;
}

Animal::~Animal()
{
  std::cout << "Animal destructor called!" << std::endl;
}

std::string Animal::getType() const
{
  return type;
}

void Animal::setType(std::string newType)
{
  type = newType;
}

void Animal::makeSound() const
{
  std::cout << "Making animal sounds" << std::endl;
}
