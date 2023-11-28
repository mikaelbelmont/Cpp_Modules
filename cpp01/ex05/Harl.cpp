/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:29:29 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/18 16:36:25 by mbarreto         ###   ########.fr       */
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
	std::cout << "Default constructor called\n";
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
	std::cout << "Default destructor called\n";
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == this->comment[i].name)
		{
			(this->*comment[i].action)();
			return ;
		}
	}
	std::cout << "Enter one of the comments" << std::endl;
}