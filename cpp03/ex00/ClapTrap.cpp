#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Called default constructor" << std::endl;
	this->name = "";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Called constructor with name" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const& copy)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Called default destructor" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints < 1)
	{
		std::cout << "No more energy points ):" << std::endl;
		return ;
	}
	std::cout << "ClapTrap" << this->name << "attacks" << target << 
	", causing " << this->attackDamage << "pointss of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > amount)
		this->hitPoints -= amount;
	else
		this->hitPoints = 0;
}

void ClapTrap::beRepared(unsigned int amount)
{
	if (this->energyPoints < 1)
	{
		std::cout << "No more energy points ):" << std::endl;
		return;
	}
	if (amount = 0)
	{
		std::cout << "At least 1 point to recover" << std::endl;
		return ;
	}
	if (this->hitPoints == 10)
	{
		std::cout << "Max hit points" << std::endl;
		return ;
	}
	this->hitPoints += amount;
	if (this->hitPoints > 10)
		this->hitPoints = 10;
	this->energyPoints--;
	std::cout << "ClapTrap" << this->name << " repaired " << amount << 
	" Now is having " << this->hitPoints << std::endl;
}

std::string ClapTrap::getName(void)
{
	return this->name;
}

unsigned int ClapTrap::getAttack(void)
{
	return this->attackDamage;
}