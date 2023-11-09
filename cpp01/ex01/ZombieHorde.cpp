#include <Zombie.hpp>

Zombie* ZombieHorde(int n, std::string name)
{
	Zombie *zombies;

	zombies = new Zombie[n];
	for (int i = 0;i < n; i++)
		zombies[i].set_name(name);
	return zombies;
}