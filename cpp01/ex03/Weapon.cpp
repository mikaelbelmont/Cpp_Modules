#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(const std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void) {}

const std::string &Weapon::get_type(void)
{
	return this->type;
}

void Weapon::set_type(const std::string type)
{
	this->type = type;
}