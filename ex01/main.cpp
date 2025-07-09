#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  std::cout << "Start of testing default constructor" << std::endl;
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;//should not create a leak
  delete i;
  std::cout << "End of testing default constructor" << std::endl;
  std::cout << "\n\n" << std::endl;
  std::cout << "Start of testing destructors are called in appropriate order" << std::endl;
  const Animal *animals[10];
  for (int i = 0; i < 5; i++)
  {
    animals[i] = new Dog();
  }
  for (int i = 5; i < 10; i++)
  {
    animals[i] = new Cat();
  }
  for (int i = 0; i < 10; i++)
  {
    delete animals[i];
  }
  std::cout << "End of testing destructors are called in appropriate order" << std::endl;
  std::cout << "\n\n" << std::endl;
  std::cout << "Start of testing dog copy is not shallow" << std::endl;
  Dog dog1;
  std::string idea1 = "Catch the ball";
  std::string idea2 = "Chew the bone";
  dog1.setIdea(0, idea1);

  Dog dog2 = dog1; // copy constructor
  std::cout << "Dog1 Idea: " << dog1.getIdea(0) << std::endl;
  std::cout << "Dog2 Idea: " << dog2.getIdea(0) << std::endl;
  dog2.setIdea(0, idea2);

  std::cout << "Dog1 Idea: " << dog1.getIdea(0) << std::endl; // should be "Catch the ball"
  std::cout << "Dog2 Idea: " << dog2.getIdea(0) << std::endl; // should be "Chew the bone"
  std::cout << "End of testing dog copy is not shallow" << std::endl;
  std::cout << "\n\n" << std::endl;
  std::cout << "Start of testing cat copy is not shallow" << std::endl;
  std::string idea3 = "Play with the ball";
  std::string idea4 = "Chase the mouse";
  Cat cat1;
  cat1.setIdea(0, idea3);

  Cat cat2 = cat1; // copy constructor
  std::cout << "Cat1 Idea: " << cat1.getIdea(0) << std::endl;
  std::cout << "Cat2 Idea: " << cat2.getIdea(0) << std::endl;
  cat2.setIdea(0, idea4);

  std::cout << "Cat1 Idea: " << cat1.getIdea(0) << std::endl; // should be "Catch the ball"
  std::cout << "Cat2 Idea: " << cat2.getIdea(0) << std::endl; // should be "Chew the bone"
  std::cout << "End of testing cat copy is not shallow" << std::endl;

  return 0;
}
