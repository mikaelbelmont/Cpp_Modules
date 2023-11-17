/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:26:05 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/15 15:26:06 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

contact::contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nick_name = "";
	this->phone_number = "";
	this->darkest_secret = "";
	std::cout << "Called Contact default constructor" << std::endl;
}

contact::~contact()
{
	std::cout << "Called Contact default constructor" << std::endl;
}

void contact::set_first_name(std::string change_name)
{
	this->first_name = change_name;
}

std::string contact::get_first_name(void)
{
	return this->first_name;
}

void contact::set_last_name(std::string change_last_name)
{
	this->last_name = change_last_name;
}

std::string contact::get_last_name(void)
{
	return this->last_name;
}

void contact::set_nick_name(std::string change_nick_name)
{
	this->nick_name = change_nick_name;
}

std::string contact::get_nick_name(void)
{
	return this->nick_name;
}

void contact::set_phone_number(std::string change_phone_number)
{
	this->phone_number = change_phone_number;
}

std::string contact::get_phone_number(void)
{
	return this->phone_number;
}

void contact::set_darkest_secret(std::string change_darkest_secret)
{
	this->darkest_secret = change_darkest_secret;
}

std::string contact::get_darkest_secret(void)
{
	return this->darkest_secret;
}
