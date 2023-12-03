#include <iostream>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ScavTrap bob = ScavTrap("Bob");
    FragTrap jim = FragTrap("Jim");

    jim.highFivesGuys();
    jim.beRepaired(0);
    for (int i = 0; i < 100; i++) {
        if (i % 5 == 0)
            bob.beRepaired(100);
        jim.attack(bob.getName());
        bob.takeDamage(jim.getAttack());
    }
    jim.attack(bob.getName());
    jim.beRepaired(1);
}
