#include <Zombie.hpp>

int main(void)
{
	Zombie *zombies = ZombieHorde(5, "Mikael");

	zombies->announce();
	delete[] zombies;
}
