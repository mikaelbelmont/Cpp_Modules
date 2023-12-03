#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
   public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &copy);
    FragTrap &operator=(FragTrap const &copy);
    ~FragTrap();

    void highFivesGuys(void);
    void attack(const std::string &target);
    void beRepaired(unsigned int amount);
};

#endif