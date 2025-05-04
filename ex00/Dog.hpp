#ifndef DOG_HPP
# define DOG_HPP

# include <bits/stdc++.h>
# include "Animal.hpp"

class Dog : public Animal
{
  public:
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    ~Dog();
};

#endif