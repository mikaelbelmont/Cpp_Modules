#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();

        AMateria *clone(void) const;
        void use(ICharacter &target);

        Cure(const Cure &);
        Cure &operator=(const Cure &);

        ~Cure();
};


#endif