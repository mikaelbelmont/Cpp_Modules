#include <iostream>

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap a("A");
	ScavTrap b (a);
	ScavTrap d("B");
	ScavTrap c;
	c = d;
	
	
	//tests:

	// std::cout << "Testing energy points + health recovery after to much heal" <<std::endl;
	for (int i = 0; i <= b.getEnergy() + 2; i++)
		c.beRepaired(1);
	std::cout << "C life = " << c.getHeatlh() << std::endl;
	std::cout << "\n" << std::endl;
	while (d.getHeatlh() > 0)
	{
		a.attack(d.getName());
		d.takeDamage(a.getAttack());
		d.attack(a.getName());
		if (d.getHeatlh() > 0)
			a.takeDamage(d.getAttack());
	}
	std::cout << "A hp = " << a.getHeatlh() << std::endl;
	a.beRepaired(100);
	std::cout << "A hp = " << a.getHeatlh() << std::endl;
	std::cout << std::endl;
	a.guardGate();
	std::cout << std::endl;
	return 0;
}
