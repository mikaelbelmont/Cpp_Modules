/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:29:00 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/15 15:29:01 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(void)
{}

void HumanB::set_weapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their ";
	if (this->weapon)
		std::cout << this->weapon->get_type() << std::endl;
	else
		std::cout << "hands, because he has no weapon!" << std::endl;
}
