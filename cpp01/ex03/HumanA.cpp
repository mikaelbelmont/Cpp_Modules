#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA(void)
{}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->get_type() << std::endl;
}
