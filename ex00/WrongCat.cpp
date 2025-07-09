#include "WrongCat.hpp"

WrongCat::WrongCat()
{
  std::cout << "WrongCat default constructor called" << std::endl;
  setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal::WrongAnimal(other)
{
  std::cout << "WrongCat copy constructor is called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
  std::cout << "WrongCat copy assignment operator is called" << std::endl;
  if (this != &other)
  {
    setType(other.getType());
  }
  return *this;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat destructor called" << std::endl;
}

void  WrongCat::makeSound() const
{
  std::cout << "WrongCat MEOWWWW" << std::endl;
}