#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); //will output the cat sound!
  j->makeSound();
  meta->makeSound();
  
  std::cout << "Wrong example" << std::endl;
  const WrongAnimal* beta = new WrongAnimal();
  const WrongAnimal* k = new WrongCat();
  std::cout << k->getType() << " " << std::endl;
  k->makeSound();
  beta->makeSound();

  delete meta;
  delete j;
  delete i;
  delete beta;
  delete k;
  return 0;
}