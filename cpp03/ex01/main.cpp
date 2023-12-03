#include <iostream>

#include "ScavTrap.hpp"

int main(void) {
    ScavTrap bob = ScavTrap("Bob");
    ScavTrap jim = ScavTrap("Jim");
    ScavTrap bobCopy = ScavTrap(bob);

    for (int i = 0; i < 50; i++) {
        if (i % 5 == 0)
            jim.beRepaired(100);
        bob.attack(jim.getName());
        jim.takeDamage(bob.getAttack());
    }
    bob.attack(jim.getName());
    bob.beRepaired(1);
    jim.beRepaired(0);
}
