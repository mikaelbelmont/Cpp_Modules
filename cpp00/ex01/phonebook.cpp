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

void phonebook::set_element(std::string element, int i)
{
	std::string input;

	if (std::cin.eof())
		return ;
	std::cout << element << '\n';
	getline(std::cin, this->data[i].value);
}

void phonebook::set_contact(void)
{
	this->contacts[this->index].set_first_name(this->data[0].value);
	this->contacts[this->index].set_last_name(this->data[1].value);
	this->contacts[this->index].set_nick_name(this->data[2].value);
	this->contacts[this->index].set_phone_number(this->data[3].value);
	this->contacts[this->index].set_darkest_secret(this->data[4].value);
}

void phonebook::ADD()
{
	this->set_element("Enter first name: ", 0);
	this->set_element("Enter last name: ", 1);
	this->set_element("Enter nick name: ", 2);
	this->set_element("Enter phone number: ", 3);
	this->set_element("Enter darkest secret: ", 4);
	for (int i = 0; i < 5; i++)
		if (this->data->value.empty())
		{
			std::cout << "Cannot create contact" << std::endl;
			return ;
		}
	this->set_contact();
	this->index++;
	if (this->index > 7)
		this->index = 0;
	if (this->size != 8)
		this->size++;
}

void phonebook::SEARCH()
{
	int choice;

	if (this->contacts[0].get_first_name().empty())
	{
		std::cout << "No contacts yet" << std::endl;
		return ;
	}
	print_header();
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
	if (this->contacts[choice].get_first_name().empty())
	{
		std::cout << "This contact does not exist\n";
		return ;
	}
	std::cout << this->contacts[choice].get_first_name() << '\n';
	std::cout << this->contacts[choice].get_last_name() << '\n';
	std::cout << this->contacts[choice].get_nick_name() << '\n';
	std::cout << this->contacts[choice].get_phone_number() << '\n';
	std::cout << this->contacts[choice].get_darkest_secret() << '\n';
}

void phonebook::print_params(std::string str)
{
	if (str.length() <= 10)
	{
		std::cout << std::setw(10) << str;
		return ;
	}
	std::cout << std::setw(9) << str.substr(0, 9);
	std::cout << std::setw(1) << '.';
	return ;
}

void phonebook::print_content(int index)
{
	std::cout << "|		";
	std::cout << index;
	std::cout << '|';
	print_params(this->contacts[index].get_first_name());
	std::cout << '|';
	print_params(this->contacts[index].get_last_name());
	std::cout << '|';
	print_params(this->contacts[index].get_nick_name());
	std::cout << '|';
	std::cout << '\n';
}

void phonebook::print_header(void)
{
	std::cout << "|		index | First Name | Last Name | Nick Name |" << '\n';
	std::cout << "|-----------|------------|-----------|-----------|" << '\n';
	for (int i = 0; i < 8; i++)
	{
		if (this->contacts[i].get_first_name().empty())
			return ;
		print_content(i);
		std::cout << "|-----------|------------|-----------|-----------|" << '\n';
	}
}

int phonebook::EXIT()
{
	return 0;
}