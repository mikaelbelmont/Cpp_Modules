#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;

    public:
        Animal(void);
        Animal(Animal const &copy);
        Animal &operator=(Animal const &copy);
        virtual ~Animal(void);

        virtual void makeSound(void) const;
        std::string getType(void) const;
};
#endif
