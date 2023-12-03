#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << "Called default constructor of Dog" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const std::string &idea) {
    std::cout << "Called default constructor of Dog" << std::endl;
    this->type = "Dog";
    this->brain = new Brain(idea);
}

Dog::Dog(Dog const& copy) : Animal(copy) {
    *this = copy;
}

Dog& Dog::operator=(Dog const& copy) {
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
    return *this;
}

Dog::~Dog(void) {
    delete this->brain;
    std::cout << "Called default destructor of Dog" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "Ãoão" << std::endl;
}
