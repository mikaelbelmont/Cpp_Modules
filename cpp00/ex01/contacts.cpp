/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:26:05 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/23 13:34:16 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

contact::contact()
{
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNumber = "";
	this->darkestSecret = "";
	std::cout << "Called Contact default constructor" << std::endl;
}

contact::~contact()
{
	std::cout << "Called Contact default constructor" << std::endl;
}

void contact::setFirstName(std::string change_name)
{
	this->firstName = change_name;
}

std::string contact::getFirstName(void)
{
	return this->firstName;
}

void contact::setLastName(std::string change_lastName)
{
	this->lastName = change_lastName;
}

std::string contact::getLastName(void)
{
	return this->lastName;
}

void contact::setNickName(std::string change_nickName)
{
	this->nickName = change_nickName;
}

std::string contact::getNickName(void)
{
	return this->nickName;
}

void contact::setPhoneNumber(std::string change_phoneNumber)
{
	this->phoneNumber = change_phoneNumber;
}

std::string contact::getPhoneNumber(void)
{
	return this->phoneNumber;
}

void contact::setDarkestSecret(std::string change_darkestSecret)
{
	this->darkestSecret = change_darkestSecret;
}

std::string contact::getDarkestSecret(void)
{
	return this->darkestSecret;
}
