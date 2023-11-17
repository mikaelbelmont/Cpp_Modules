/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:29:05 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/15 15:29:06 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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