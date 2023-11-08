#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	Zombie::announce();
}

Zombie::~Zombie()
{
	std::cout << this->name << ": You killed me... ):" << std::endl;
}
