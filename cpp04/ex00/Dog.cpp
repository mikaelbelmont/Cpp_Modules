#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << "Called default constructor of Dog" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const& copy) : Animal(copy) {
    *this = copy;
}

Dog& Dog::operator=(Dog const& copy) {
    this->type = copy.type;
    return *this;
}

Dog::~Dog(void) {
    std::cout << "Called default destructor of Dog" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "Ãoão" << std::endl;
}
