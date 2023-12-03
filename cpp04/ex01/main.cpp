#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal *all[10];

    for (int i = 0; i < 5; i++) {
        all[i] = new Cat("I want to kill the Human race");
        all[5+ i] = new Dog("I want to save the human race");
    }

    std::cout <<  "\nAll Created Successfully\n" << std::endl;

    const Animal *catCopy = new Cat(*(Cat *)all[0]);
    const Animal *dogCopy = new Dog(*(Dog *)all[5]);

    delete dogCopy;
    delete catCopy;

    for (int i = 0; i < 10; ++i)
        delete all[i];
}
