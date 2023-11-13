#include <iostream>
#include <string>

typedef std::string string;

int main(void)
{
	string str = "HI THIS IS BRAIN";
	string *string_ptr = &str;
	string &string_ref = str;

	std::cout << &str << std::endl;
	std::cout << string_ptr << std::endl;
	std::cout << &string_ref << std::endl;
	std::cout << str << std::endl;
	std::cout << *string_ptr << std::endl;
	std::cout << string_ref << std::endl;	
}