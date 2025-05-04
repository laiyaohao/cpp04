#ifndef DOG_HPP
# define DOG_HPP

# include <bits/stdc++.h>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
  private:
    Brain *brain;
  
  public:
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    ~Dog();
    void makeSound() const;
    void createBrain();
    void deleteBrain();
};

#endif