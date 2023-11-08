#include <Zombie.hpp>

void Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": You killed me!" << std::endl;
}