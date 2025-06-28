#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <bits/stdc++.h>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
  private:
    AMateria* _materia[4];
  public:
    MateriaSource();
    MateriaSource(MateriaSource const & src);
    ~MateriaSource();
    MateriaSource & operator=(MateriaSource const & rhs);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
}

#endif