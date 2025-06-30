#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const & name)
{
  this->_name = name;
  for (int i = 0; i < 4; i++)
    this->_inventory[i] = NULL;
}

Character::Character(Character const & src)
{
  *this = src;
}

Character::~Character()
{
  for (int i = 0; i < 4; i++)
  {
    if (this->_inventory[i])
      this->_inventory[i] = NULL;
  }
}

Character & Character::operator=(Character const & rhs)
{
  this->_name = rhs._name;
  for (int i = 0; i < 4; i++)
  {
    if (this->_inventory[i])
      this->_inventory[i] = NULL;
    if (rhs._inventory[i])
      this->_inventory[i] = rhs._inventory[i]->clone();
    else
      this->_inventory[i] = NULL;
  }
  return *this;
}

std::string const & Character::getName() const
{
  return this->_name;
}

void Character::equip(AMateria* m)
{
  for (int i = 0; i < 4; i++)
  {
    if (!this->_inventory[i])
    {
      this->_inventory[i] = m;
      return;
    }
  }
}

void Character::unequip(int idx)
{
  if (idx < 0 || idx > 3)
    return;
  if (this->_inventory[idx])
    this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
  if (idx < 0 || idx > 3)
    return;
  if (this->_inventory[idx])
    this->_inventory[idx]->use(target);
}

std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
  o << rhs.getName() << " has ";
  for (int i = 0; i < 4; i++)
  {
    if (rhs._inventory[i])
      o << rhs._inventory[i]->getType() << " ";
  }
  o << std::endl;
  return o;
}

