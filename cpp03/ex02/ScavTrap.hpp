#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <limits>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
   public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &copy);
    ScavTrap &operator=(ScavTrap const &copy);
    ~ScavTrap();

    void guardGate(void);
    void attack(const std::string &target);
    void beRepaired(unsigned int amount);
};

#endif
