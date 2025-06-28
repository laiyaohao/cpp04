#ifndef CURE_HPP
# define CURE_HPP

# include <bits/stdc++.h>
# include "AMateria.hpp"

class Cure : public AMateria
{
  public:
    Cure();
    Cure(const Cure &other);
    Cure &operator=(const Cure &other);
    ~Cure();
    Cure* clone() const;
    void use(ICharacter& target);
};

#endif