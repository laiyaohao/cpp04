#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <bits/stdc++.h>

class Animal
{
  protected:
    std::string type;
    void setType(std::string);
  
  public:
    Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif