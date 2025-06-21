#include "Cat.hpp"

// cannot directly do Cat::Cat() : type("Cat");
// because type is not a direct member of Cat
// this initialization list method to initialize can only be done
// with its own members
Cat::Cat()
{
  std::cout << "Cat default constructor called" << std::endl;
  setType("Cat");
}

Cat::Cat(const Cat &other): Animal::Animal(other)
{
  std::cout << "Cat copy constructor is called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
  std::cout << "Cat copy assignment operator is called" << std::endl;
  if (this != &other)
  {
    setType(other.getType());
  }
  return *this;
}

Cat::~Cat()
{
  std::cout << "Cat destructor called" << std::endl;
}

void  Cat::makeSound() const
{
  std::cout << "MEOWWWWW" << std::endl;
}