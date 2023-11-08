#include <Zombie.hpp>

//ZombieHorde(int n, str::string name);

int main(void)
{
	Zombie *zombies = ZombieHorde(5, "Mikael");

	zombies->announce();
	delete[] zombies;
}
