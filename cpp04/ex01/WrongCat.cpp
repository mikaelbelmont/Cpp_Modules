#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    std::cout << "Called default constructor of WrongCat" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy) {
    *this = copy;
}

WrongCat& WrongCat::operator=(WrongCat const& copy) {
    this->type = copy.type;
    return *this;
}

WrongCat::~WrongCat(void) {
    std::cout << "Called default destructor of WrongCat" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "Ãoão" << std::endl;
}
