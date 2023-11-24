/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:26:19 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/24 17:20:06 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(void)
{
	std::cout << "Called PhoneBook default constructor" << std::endl;
	this->size = 0;
	this->index = 0;
}

phonebook::~phonebook(void)
{
	std::cout << "Called PhoneBook default destructor" << std::endl;
}

void phonebook::setElement(std::string element, int i)
{
	std::string input;

	if (std::cin.eof())
		return ;
	std::cout << element << '\n';
	getline(std::cin, this->data[i].value);
}

void phonebook::setContact(void)
{
	this->contacts[this->index].setFirstName(this->data[0].value);
	this->contacts[this->index].setLastName(this->data[1].value);
	this->contacts[this->index].setNickName(this->data[2].value);
	this->contacts[this->index].setPhoneNumber(this->data[3].value);
	this->contacts[this->index].setDarkestSecret(this->data[4].value);
}

void phonebook::ADD()
{
	this->setElement("Enter first name: ", 0);
	this->setElement("Enter last name: ", 1);
	this->setElement("Enter nick name: ", 2);
	this->setElement("Enter phone number: ", 3);
	this->setElement("Enter darkest secret: ", 4);
	for (int i = 0; i < 5; i++)
		if (this->data[i].value.empty())
		{
			std::cout << "Cannot create contact. At least one of the arguments is empty" << std::endl;
			return ;
		}
	this->setContact();
	this->index++;
	if (this->index > 7)
		this->index = 0;
	if (this->size != 8)
		this->size++;
}

void phonebook::SEARCH()
{
	int choice;

	if (this->contacts[0].getFirstName().empty())
	{
		std::cout << "No contacts yet" << std::endl;
		return ;
	}
	printHeader();
	std::cout << "Enter a index\n";
	std::cin >> choice;
	if (std::cin.fail())
	{
		std::cout << "Enter a number" << std::endl;
		return ;
	}
	if (choice < 0 || choice > 7)
	{
		std::cout << "Index out of limits\n";
		return ;
	}
	if (this->contacts[choice].getFirstName().empty())
	{
		std::cout << "This contact does not exist\n";
		return ;
	}
	std::cout << "First name:" << this->contacts[choice].getFirstName() << '\n';
	std::cout << "Last name:" <<this->contacts[choice].getLastName() << '\n';
	std::cout << "Nick name:" <<this->contacts[choice].getNickName() << '\n';
	std::cout << "Phone number:" <<this->contacts[choice].getPhoneNumber() << '\n';
	std::cout << "Darkest secret:" <<this->contacts[choice].getDarkestSecret() << '\n';
}

std::string 	phonebook::getInfo(std::string info)
{
	std::string tmp;
	
	if (info.length() >= 10)
	{
		tmp = info.substr(0, 9);
		tmp.append(".");
	}
	else
	{
		tmp = info;
		while(tmp.length() < 10)
			tmp.insert(0, " ");
	}
	return tmp;
}

// void phonebook::setInfo(std::string str)
// {
// 	std::string tmp;

// 	tmp = phonebook::getInfo(str);
// 	std::cout << tmp;
// 	std::cout << "|";
// 	tmp = phonebook::getInfo(str);
// 	std::cout << tmp;
// 	std::cout << "|";
// 	tmp = phonebook::getInfo(str);
// 	std::cout << tmp;
// 	std::cout << "|";
// }

void phonebook::printParams(std::string str)
{
	std::string tmp;

	tmp = phonebook::getInfo(str);
	std::cout << tmp;
	//std::cout << "|";
	// tmp = phonebook::getInfo(str);
	// std::cout << tmp;
	//std::cout << "|";
	// tmp = phonebook::getInfo(str);
	// std::cout << tmp;
	//std::cout << "|";
}

void phonebook::printContent(int index)
{
	std::cout << "|         ";
	std::cout << index;
	std::cout << '|';
	printParams(this->contacts[index].getFirstName());
	std::cout << '|';
	printParams(this->contacts[index].getLastName());
	std::cout << '|';
	printParams(this->contacts[index].getNickName());
	std::cout << '|';
	std::cout << '\n';
}

void phonebook::printHeader(void)
{
	std::cout << "|  index   |First Name| Last Name| Nick Name|" << '\n';
	std::cout << "|----------|----------|----------|----------|" << '\n';
	for (int i = 0; i < 8; i++)
	{
		if (this->contacts[i].getFirstName().empty())
			return ;
		printContent(i);
		std::cout << "|----------|----------|----------|----------|" << '\n';
	}
}

int phonebook::EXIT()
{
	//system("clear");
	std::exit(0);
}