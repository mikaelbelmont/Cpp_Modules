#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a = ClapTrap("A");
	ClapTrap b = ClapTrap("B");
	ClapTrap aCopy = ClapTrap(a);

	for (int i = 0; i < 10; i++)
	{
		a.attack(b.getName());
		b.takeDamage(a.getAttack());
	}
	aCopy.attack(b.getName());
	b.beRepared(0);
	b.beRepared(1);
	a.beRepared(1);
}