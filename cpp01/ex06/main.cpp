/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:45:33 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/30 12:55:57 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl Harl;

	if (argc != 2 || !argv[1])
	{
		std::cout << "Select one of those: DEBUG, INFO, WARNING or ERROR" << std::endl;
		return(0);
	}
	Harl.complain(argv[1]);
	return 0;
}