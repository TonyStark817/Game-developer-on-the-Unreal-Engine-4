/*
  main.cpp
 
  Моя учёба в SkillBox на курсе "Разработчик игр на Unreal Engine 4" (C++)
 
  SkillBox_Homework 19.5

  Created by Tony Stark817(Nikolay Gridin) on 11.08.2023.
*/

#include <iostream>

class Animal {
public:
  virtual void Voice() {
    std::cout << "Animal voice!" << std::endl;
  }
};

class Dog : public Animal {
public:
  void Voice() override {
    std::cout << "Woof!" << std::endl;
  }
};

class Cat : public Animal {
public:
  void Voice() override {
    std::cout << "Meow!" << std::endl;
  }
};

class Cow : public Animal {
public:
  void Voice() override {
    std::cout << "Moo!" << std::endl;
  }
};

int main() {
  const int animalCount = 3;
  Animal* animals[animalCount];
    
  animals[0] = new Dog();
  animals[1] = new Cat();
  animals[2] = new Cow();
    
  for (int i = 0; i < animalCount; i++) {
    animals[i]->Voice();
  }
    
  for (int i = 0; i < animalCount; i++) {
    delete animals[i];
  }
    
  return 0;
}