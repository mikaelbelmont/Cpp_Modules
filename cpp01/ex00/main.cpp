#include "Zombie.hpp"

int main()
{
    std::string input = "";

    while (!std::cin.eof())
    {
        std::cout << "Enter a Zombie name:\n";
        getline(std::cin, input);
        std::cout << input << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
    }
}