#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void set_name(std::string name);

	private:
		std::string name;
};

Zombie *ZombieHorde(int n, std::string name);

#endif