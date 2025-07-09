#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <bits/stdc++.h>

class ICharacter;

class AMateria
{
  protected:
    std::string type;

  public:
    AMateria(std::string const & type);
    AMateria &operator=(const AMateria &other);
    virtual ~AMateria();
    AMateria(const AMateria &other);
    void  setType(std::string type);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif