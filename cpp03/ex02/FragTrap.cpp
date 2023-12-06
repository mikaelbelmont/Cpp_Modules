#include "FragTrap.hpp"

// FragTrap::FragTrap() {
//     std::cout << "Called default constructor from FragTrap" << std::endl;
//     this->name = "";
//     this->hitPoints = 100;
//     this->energyPoints = 100;
//     this->attackDamage = 30;
// }

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Called default constructor from FragTrap" << std::endl;
	this->name = "";
	setHealth(100);
	setEnergy(100);
	setAttack(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Called constructor with name from FragTrap" << std::endl;
	this->name = name;
	setHealth(100);
	setEnergy(100);
	setAttack(30);
}

// FragTrap::FragTrap(std::string name) {
//     std::cout << "Called constructor with name from FragTrap" << std::endl;
//     this->name = name;
//     this->hitPoints = 100;
//     this->energyPoints = 100;
//     this->attackDamage = 30;
// }

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
    std::cout << "Assignment operator called for FragTrap" << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(FragTrap const& copy) {
    std::cout << "Called copy constructor from FragTrap" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "Called default destructor from FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->name << " request a positive high fives" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (this->hitPoints <= 0)
	{
		std::cout << this->name << " it's dead." << std::endl;
		return ;
	}
    if (this->energyPoints < 1) {
        std::cout << "There is no more energy points available" << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void FragTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints <= 0)
	{
		std::cout << this->name << " it's dead." << std::endl;
		return ;
	}
    if (this->energyPoints < 1) {
        std::cout << "There is no more energy points available" << std::endl;
        return;
    }
    if (amount == 0) {
        std::cout << "You need an amount of at least 1 to recover" << std::endl;
        return;
    }
    if (this->hitPoints == 100) {
        std::cout << "You cannot have more HP" << std::endl;
        return;
    }
    this->hitPoints += amount;
    if (this->hitPoints > 100)
        this->hitPoints = 100;
    this->energyPoints--;
    std::cout << "FragTrap " << this->name << " Repaired " << amount << " Now is having " << this->hitPoints << std::endl;
}

// void FragTrap::takeDamage(unsigned int amount)
// {
// 	if (this->hitPoints >= amount)
// 		this->hitPoints -= amount;
// 	if (this->hitPoints <= 0)
// 	{
// 		std::cout << this->name << " it's dead." << std::endl;
// 		return ;
// 	}
// 	else
// 		std::cout << this->name << " took " << amount << " of damage." << std::endl;
// }
