#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Called default constructor of Cat" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const& copy)  : Animal() {
    *this = copy;
}

Cat& Cat::operator=(Cat const& copy) {
    this->type = copy.type;
    return *this;
}

Cat::~Cat(void) {
    std::cout << "Called default destructor of Cat" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "Miau" << std::endl;
}
