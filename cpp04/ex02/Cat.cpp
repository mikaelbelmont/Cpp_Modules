#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Called default constructor of Cat" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const std::string &idea) {
    std::cout << "Called constructor with idea of Cat" << std::endl;
    this->type = "Cat";
    this->brain = new Brain(idea);
}

Cat::Cat(Cat const& copy)  : Animal() {
    *this = copy;
}

Cat& Cat::operator=(Cat const& copy) {
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
    return *this;
}

Cat::~Cat(void) {
    delete this->brain;
    std::cout << "Called default destructor of Cat" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "Miau" << std::endl;
}
