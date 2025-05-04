#include "Dog.hpp"

Dog::Dog()
{
  std::cout << "Dog default constructor called" << std::endl;
  setType("Dog");
}

Dog::Dog(const Dog &other): Animal::Animal(other)
{
  std::cout << "Dog copy constructor is called." << std::endl;
  *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
  std::cout << "Dog copy assignment operator is called" << std::endl;
  if (this != &other)
  {
    setType(other.getType());
  }
  return *this;
}

Dog::~Dog()
{
  std::cout << "Dog destructor called" << std::endl;
}

void  Dog::makeSound() const
{
  std::cout << "WOOOFFFF" << std::endl;
}