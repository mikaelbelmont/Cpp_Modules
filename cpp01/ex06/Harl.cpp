/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:54:16 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/30 12:54:00 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl(void)
{
	this->comment[0].name = "DEBUG";
	this->comment[0].action = &Harl::debug;
	this->comment[1].name = "INFO";
	this->comment[1].action = &Harl::info;
	this->comment[2].name = "WARNING";
	this->comment[2].action = &Harl::warning;
	this->comment[3].name = "ERROR";
	this->comment[3].action = &Harl::error;
}

Harl::~Harl(void)
{
}

void Harl::complain(std::string level)
{
	int i = -1;

	while (++i < 4)
		if (!level.compare(comment[i].name))
			break ;
	switch (i)
	{
		case (0):
		{
			std::cout << "[ DEBUG ]" << std::endl;
			Harl::debug();
			std::cout << std::endl;
		}
		case (1):
		{
			std::cout << "[ INFO ]" << std::endl;
			Harl::info();
			std::cout << std::endl;
		}
		case (2):
		{
			std::cout << "[ WARNING ]" << std::endl;
			Harl::warning();
			std::cout << std::endl;
		}
		case (3):
		{
			std::cout << "[ ERROR ]" << std::endl;
			Harl::error();
			std::cout << std::endl;
			break ;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}