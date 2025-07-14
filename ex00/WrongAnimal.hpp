#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <bits/stdc++.h>

class WrongAnimal
{
  protected:
    std::string type;
    void setType(std::string);
  
  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &other);
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};

#endif