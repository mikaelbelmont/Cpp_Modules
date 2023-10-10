#include "contacts.hpp"

contacts::contacts()
{
	this->first_name = "";
	this->last_name = "";
	this->nick_name = "";
	this->phone_number = "";
	this->darkest_secret = "";
	std::cout << "Called Contact default constructor" << std::endl;
}

contacts::~contacts()
{
	std::cout << "Called Contact default constructor" << std::endl;
}

void contacts::set_first_name(std::string change_name)
{
	this->first_name = change_name;
}

std::string contacts::get_first_name(void)
{
	return this->first_name;
}

void contacts::set_last_name(std::string change_last_name)
{
	this->last_name = change_last_name;
}

std::string contacts::get_last_name(void)
{
	return this->last_name;
}

void contacts::set_nick_name(std::string change_nick_name)
{
	this->nick_name = change_nick_name;
}

std::string contacts::get_nick_name(void)
{
	return this->nick_name;
}

void contacts::set_phone_number(std::string change_phone_number)
{
	this->phone_number = change_phone_number;
}

std::string contacts::get_phone_number(void)
{
	return this->phone_number;
}

void contacts::set_darkest_secret(std::string change_darkest_secret)
{
	this->darkest_secret = change_darkest_secret;
}

std::string contacts::get_darkest_secret(void)
{
	return this->darkest_secret;
}
