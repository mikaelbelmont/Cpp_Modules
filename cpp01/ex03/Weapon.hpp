#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(void);
		Weapon(const std::string type);
		~Weapon(void);
		const std::string &get_type(void);
		void set_type(const std::string type);
};

#endif