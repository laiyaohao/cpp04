#include "Dog.hpp"

Dog::Dog()
{
  std::cout << "Dog default constructor called" << std::endl;
  createBrain();
  setType("Dog");
}

Dog::Dog(const Dog &other): Animal::Animal(other), brain(new Brain(*other.brain))
{
  std::cout << "Dog copy constructor is called." << std::endl;
}

Dog &Dog::operator=(const Dog &other) 
{
  std::cout << "Dog copy assignment operator is called" << std::endl;
  if (this != &other)
  {
    Animal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain);
  }
  return *this;
}

Dog::~Dog()
{
  std::cout << "Dog destructor called" << std::endl;
  deleteBrain();
}

void  Dog::makeSound() const
{
  std::cout << "WOOOFFFF" << std::endl;
}


void  Dog::createBrain()
{
  brain = new Brain();
}

void  Dog::deleteBrain()
{
  delete brain;
}

std::string Dog::getIdea(int ind) const
{
  std::cout << "Dog getIdea called" << std::endl;
  return brain->getIdea(ind);
}

void Dog::setIdea(int ind, std::string &idea)
{
  brain->setIdea(ind, idea);
  std::cout << "Dog setIdea called" << std::endl;
}
