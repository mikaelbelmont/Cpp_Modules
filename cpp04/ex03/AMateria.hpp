#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "iostream"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria(void);
    AMateria(std::string const & type);

    AMateria(const AMateria &);
    AMateria &operator=(const AMateria &);

    std::string const & getType(void) const;
    virtual AMateria* clone(void) const = 0;
    virtual void use(ICharacter &target);

    ~AMateria();
};




#endif