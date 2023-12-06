#include "ScavTrap.hpp"

// ScavTrap::ScavTrap() {
//     std::cout << "Called default constructor from ScavTrap" << std::endl;
//     this->name = "";
//     this->hitPoints = 100;
//     this->energyPoints = 50;
//     this->attackDamage = 20;
// }

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Called default constructor from ScavTrap" << std::endl;
	this->name = "";
	setHealth(100);
	setEnergy(50);
	setAttack(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Called constructor with name from ScavTrap" << std::endl;
	this->name = name;
	setHealth(100);
	setEnergy(50);
	setAttack(20);
}

// ScavTrap::ScavTrap(std::string name) {
//     std::cout << "Called constructor with name from ScavTrap" << std::endl;
//     this->name = name;
//     this->hitPoints = 100;
//     this->energyPoints = 50;
//     this->attackDamage = 20;
// }

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
    std::cout << "Assignment operator called for ScavTrap" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& copy) {
    //ClapTrap::operator=(copy);
    std::cout << "Called copy constructor from ClapTrap" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "Called default destructor from ScavTrap" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->hitPoints <= 0)
	{
		std::cout << this->name << " it's dead." << std::endl;
		return ;
	}
    if (!this->energyPoints) {
        std::cout << "There is no more energy points available" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints <= 0)
	{
		std::cout << this->name << " it's dead." << std::endl;
		return ;
	}
    if (!this->energyPoints) {
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
    std::cout << "ScavTrap " << this->name << " repaired " << amount << " now is having " << this->hitPoints << std::endl;
}
