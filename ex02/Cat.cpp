#include "Cat.hpp"

Cat::Cat()
{
  std::cout << "Cat default constructor called" << std::endl;
  createBrain();
  setType("Cat");
}

Cat::Cat(const Cat &other): Animal::Animal(other), brain(new Brain(*other.brain))
{
  std::cout << "Cat copy constructor is called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
  std::cout << "Cat copy assignment operator is called" << std::endl;
  if (this != &other)
  {
    Animal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain);
  }
  return *this;
}

Cat::~Cat()
{
  std::cout << "Cat destructor called" << std::endl;
  deleteBrain();
}

void  Cat::makeSound() const
{
  std::cout << "MEOWWWWW" << std::endl;
}

void  Cat::createBrain()
{
  brain = new Brain();
}

void  Cat::deleteBrain()
{
  delete brain;
}

std::string Cat::getIdea(int ind) const
{
  std::cout << "Cat getIdea called" << std::endl;
  return brain->getIdea(ind);
}

void Cat::setIdea(int ind, std::string &idea)
{
  brain->setIdea(ind, idea);
  std::cout << "Cat setIdea called" << std::endl;
}