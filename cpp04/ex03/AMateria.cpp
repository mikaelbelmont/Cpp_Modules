#include "AMateria.hpp"

AMateria::AMateria(void)
:type("")
{
}

AMateria::AMateria(std::string const &type)
:type(type)
{
}

void AMateria::use(ICharacter &target)
{}

std::string const & AMateria::getType(void) const
{return (this->type);}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &cpy)
{
    *this = cpy;
}

AMateria &AMateria::operator=(const AMateria &assing)
{
    this->type = assing.type;
    return (*this);
}
