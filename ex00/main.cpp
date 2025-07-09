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
  std::cout << "\n\n" << std::endl;
  std::cout << "testing Animal's copy assignment constructor" << std::endl;
  Animal* test0 = new Animal();
  Animal* test1 = new Animal();
  std::cout << "test0's type: " << test0->getType() << " " << std::endl;
  std::cout << "test1's type: " << test1->getType() << " " << std::endl;
  *test1 = *test0;
  test1->setType("HAHA");
  std::cout << "test0's type: " << test0->getType() << " " << std::endl;
  std::cout << "test1's type: " << test1->getType() << " " << std::endl;
  std::cout << "\n\n" << std::endl;
  std::cout << "testing Animal's copy constructor" << std::endl;
  Animal* test2 = new Animal(*test1);
  std::cout << "test2's type: " << test2->getType() << " " << std::endl;
  test2->setType("lmaoo");
  std::cout << "test2's type: " << test2->getType() << " " << std::endl;
  std::cout << "test1's type: " << test1->getType() << " " << std::endl;
  std::cout << "\n\n" << std::endl;
  std::cout << "testing Cat's copy assignment constructor" << std::endl;
  Cat* test3 = new Cat();
  Cat* test4 = new Cat();
  std::cout << "test3's type: " << test3->getType() << " " << std::endl;
  std::cout << "test4's type: " << test4->getType() << " " << std::endl;
  *test4 = *test3;
  test4->setType("HAHA");
  std::cout << "test3's type: " << test3->getType() << " " << std::endl;
  std::cout << "test4's type: " << test4->getType() << " " << std::endl;
  std::cout << "\n\n" << std::endl;
  std::cout << "testing Cat's copy constructor" << std::endl;
  Cat* test5 = new Cat(*test4);
  std::cout << "test5's type: " << test5->getType() << " " << std::endl;
  test5->setType("lmaoo");
  std::cout << "test5's type: " << test5->getType() << " " << std::endl;
  std::cout << "test4's type: " << test4->getType() << " " << std::endl;
  std::cout << "\n\n" << std::endl;

  
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
  delete test0;
  delete test1;
  delete test2;
  return 0;
}