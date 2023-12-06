#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a = ClapTrap("A");
	ClapTrap b = ClapTrap("B");
	ClapTrap aCopy = ClapTrap(a);

	//tests:

	a.setAttack(5);
	a.attack(b.getName());
	b.takeDamage(a.getAttack());
	b.attack(a.getName());
	a.takeDamage(b.getAttack());
	b.beRepared(2);

	std::cout << std::endl;

	// b.beRepared(10);
	// a.setAttack(10);
	// a.attack(b.getName());
	// b.takeDamage(a.getAttack());
	// b.setAttack(10);
	// b.attack(a.getName());
	// a.takeDamage(b.getAttack());

	std::cout << std::endl;

	// a.setAttack(9);
	// a.attack(b.getName());
	// b.takeDamage(a.getAttack());
	// b.beRepared(1);
	// b.beRepared(1);
	// b.beRepared(1);
	// b.beRepared(1);
	// b.beRepared(1);
	// b.beRepared(1);
	// b.beRepared(1);
	// b.beRepared(1);
	// b.beRepared(1);
	// b.beRepared(1);
	// a.setAttack(2);
	// a.attack(b.getName());
	// b.takeDamage(a.getAttack());
	// b.beRepared(1);
	// b.beRepared(1);
	// b.attack(a.getName());
	// a.takeDamage(b.getAttack());

	std::cout << std::endl;

	// aCopy.setAttack(5);
	// aCopy.attack(b.getName());
	// b.takeDamage(aCopy.getAttack());
	// b.beRepared(1);
	// a.attack(b.getName());
	// b.takeDamage(a.getAttack());
}