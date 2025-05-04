#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <bits/stdc++.h>

class WrongAnimal
{
  protected:
    std::string type;
  
  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &other);
    ~WrongAnimal();
    std::string getType() const;
    void setType(std::string);
    void makeSound() const;
};

#endif