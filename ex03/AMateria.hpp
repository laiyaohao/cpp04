#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <bits/stdc++.h>
#include <ICharacter.hpp>

class AMateria
{
  protected:
    std::string type;

  public:
    AMateria(std::string const & type);
    AMateria &operator=(const AMateria &other);
    ~AMateria();
    AMateria(const AMateria &other);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif