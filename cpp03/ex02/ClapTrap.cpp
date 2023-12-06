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
	std::cout << "Called copy constructor from ClapTrap" << std::endl;
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
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " it's dead." << std::endl;
		return ;
	}
	if (this->energyPoints < 1)
	{
		std::cout << "No more energy points ):" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << 
	", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	//if (this->hitPoints >= amount)
	this->hitPoints -= amount;
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " it's dead." << std::endl;
		return ;
	}
	else
		std::cout << this->name << " took " << amount << " of damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " it's dead." << std::endl;
		return ;
	}
	if (this->energyPoints < 1)
	{
		std::cout << "No more energy points ):" << std::endl;
		return;
	}
	if (amount == 0)
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
	std::cout << "ClapTrap " << this->name << " repaired " << amount << 
	" now is having " << this->hitPoints << std::endl;
}

std::string ClapTrap::getName(void)
{
	return this->name;
}

unsigned int ClapTrap::setAttack(unsigned int amount)
{
	return this->attackDamage = amount;
}

int ClapTrap::getAttack(void)
{
	return (this->attackDamage);
}

int	ClapTrap::getHeatlh()
{
	return (this->hitPoints);
}

void ClapTrap::setHealth(unsigned int amount)
{
	this->hitPoints = amount;
	//this->maxHitPoints = amount;
}

int	ClapTrap::getEnergy()
{
	return (this->energyPoints);
}

void ClapTrap::setEnergy(unsigned int amount)
{
	this->energyPoints = amount;
}
