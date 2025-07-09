#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
  std::cout << "MateriaSource default constructor is called." << std::endl;
  for (int i = 0; i < 4; i++)
    _materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
  std::cout << "MateriaSource destructor is called." << std::endl;
  for (int i = 0; i < 4; i++)
  {
    if (_materia[i])
      delete _materia[i];
  }
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
  std::cout << "MateriaSource copy constructor is called." << std::endl;
  for (int i = 0; i < 4; i++)
  {
    if (src._materia[i])
      _materia[i] = src._materia[i]->clone();
    else
      _materia[i] = NULL;
  }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
  std::cout << "MateriaSource copy assignment constructor is called." << std::endl;
  for (int i = 0; i < 4; i++)
  {
    if (_materia[i])
      delete _materia[i];
    if (rhs._materia[i])
      _materia[i] = rhs._materia[i]->clone();
    else
      _materia[i] = NULL;
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
  std::cout << "MateriaSource's learnMateria method is called." << std::endl;
  for (int i = 0; i < 4; i++)
  {
    if (!_materia[i])
    {
      _materia[i] = m;
      return;
    }
  }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
  std::cout << "MateriaSource's CreateMateria method is called." << std::endl;
  for (int i = 0; i < 4; i++)
  {
    if (_materia[i] && _materia[i]->getType() == type)
      return _materia[i]->clone();
  }
  return NULL;
}

