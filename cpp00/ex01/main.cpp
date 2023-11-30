/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:26:16 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/27 15:48:51 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	std::string input = "";
	phonebook phonebook;

	while (!std::cin.eof())
	{
		std::cout << "Enter add, search or exit\n";
		getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		for (int i = 0; input[i] != '\0'; i++)
		{
			input[i] = (char)tolower(input[i]);
		}
		//std::cout << input << std::endl;
		if (input == "add")
			phonebook.ADD();
		else if (input == "search")
			phonebook.SEARCH();
		else if (input == "exit")
		{
			std::cout << input << std::endl;
			phonebook.EXIT();
		}
		else
			std::cout << "Please choose: add, search or exit" << std::endl;
		input = "";
		std::cin.clear();
	}
}