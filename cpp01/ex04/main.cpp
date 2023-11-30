/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:29:27 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/29 15:15:39 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

std::string read_file(std::string fd)
{
	std::ifstream file(fd.c_str());
	std::string replace;
	std::string tmp;

	if (!file.is_open())
	{
		std::cout << "Error while opening the file" << std::endl;
		exit(1);
	}
	else
		while (std::getline(file, tmp))
			replace.append(tmp + "\n");
	file.close();
	return (replace);
}

std::string replace_args(std::string str, std::string replace, std::string new_str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (!str.compare(i, replace.length(), replace))
		{
			str.erase(i, replace.length());
			str.insert(i, new_str);
		}
	}
	return (str);
}

void new_file(std::string str, std::string fd)
{
	std::string n_file;

	n_file = fd.append(".replace");
	std::ofstream file(n_file.c_str());
	if (!file.is_open())
	{
		std::cout << "Error while creating the file" << std::endl;
		exit(1);
	}
	else
		file << str;
}

int main(int ac, char **av)
{
	std::string str;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	if (!av[2][0] || !av[3][0])
	{
		std::cout << "Strings must contain something" << std::endl;
		return 1;
	}
	if (!((std::string)av[2]).compare(av[3]))
	{
		std::cout << "Strings must be different" << std::endl;
		return 1;
	}
	str = read_file(av[1]);
	str = replace_args(str, av[2], av[3]);
	new_file(str, av[1]);
	return 0;
}
