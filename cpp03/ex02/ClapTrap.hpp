#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
		//unsigned int maxHitPoints;
	
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);
		ClapTrap &operator=(ClapTrap const &copy);
		~ClapTrap(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void);
		unsigned int setAttack(unsigned int amount);
		int getAttack(void);
		int	getHeatlh(void);
		void setHealth(unsigned int amount);
		int	getEnergy(void);
		void setEnergy(unsigned int amount);
};

#endif