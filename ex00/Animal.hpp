#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <bits/stdc++.h>

class Animal
{
  protected:
    std::string type;
  
  public:
    Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);
    ~Animal();
    std::string getType() const;
    void setType(std::string);
    void makeSound() const;
};

#endif