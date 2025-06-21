#include "Brain.hpp"

Brain::Brain()
{
  std::cout << "Brain default constructor called" << std::endl;
  for (int i = 0; i < 100; i++)
  {
    setIdea(i, "");
  }
}

Brain::Brain(const Brain &other)
{
  std::cout << "Brain copy constructor called" << std::endl;
  for (int i = 0; i < 100; i++)
  {
    setIdea(i, other.getIdea(i));
  }
}

Brain &Brain::operator=(const Brain &other)
{
  std::cout << "Animal copy assignment operator is called" << std::endl;
  if (this != &other)
  {
    for (int i = 0; i < 100; i++)
    {
      setIdea(i, other.getIdea(i));
    }
  }
  return *this;
}


Brain::~Brain()
{
  std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int ind) const
{
  if (ind >= 100 || ind < 0)
  {
    std::cout << "index out of range" << std::endl;
    return "ERROR";
  }
  return ideas[ind];
}

void Brain::setIdea(int ind, std::string newIdea)
{
  if (ind >= 100 || ind < 0)
  {
    std::cout << "index out of range" << std::endl;
    return ;
  }
  ideas[ind] = newIdea;
}
