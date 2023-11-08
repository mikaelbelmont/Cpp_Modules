#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
	Zombie *zombie = newZombie("Zombie");
	randomChump("Mikael");
	delete zombie;
}