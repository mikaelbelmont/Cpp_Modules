#include <Zombie.hpp>

Zombie::Zombie(void)
{
	std::cout << "Default constructor called" << std::endl;
}

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

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
