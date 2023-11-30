/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:29:05 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/29 15:26:31 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(const std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void) {}

const std::string &Weapon::getType(void)
{
	return this->type;
}

void Weapon::setType(const std::string type)
{
	this->type = type;
}