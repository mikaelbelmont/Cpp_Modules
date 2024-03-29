#include "Character.hpp"

Character::Character(void)
{
    for (int i = 0; i < 4; i++)
        inventary[i] = 0;
}

Character::Character(std::string name)
:name(name)
{}

Character::~Character(void)
{
}

std::string const &Character::getName(void) const
{ return (this->name);}

void Character::equip(AMateria *m)
{ 
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!inventary[i])
        {
            inventary[i] = m;
            std::cout << "Equiped " << m->getType() << " slot " << i << std::endl;
            return ;
        }
    }
    std::cout << "Inventary is full\n";
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
        std::cout << "index out of range, inventary just have 4 slots\n";
    else
        inventary[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 3 || idx < 0)
        std::cout << "index out of range, inventary just have 4 slots\n";
    else
        if (inventary[idx])
            inventary[idx]->use(target);
        else
            std::cout << "Slot empty\n";
}

Character::Character(const Character &cpy)
{
    *this = cpy;
}

Character &Character::operator=(const Character &assing)
{
    name = assing.name;
    for (int i = 0; i < 4; i++)
        inventary[i] = assing.inventary[i];
    return (*this);
}