/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:28:47 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/30 17:03:13 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main(void)
{
	int i = 0;
	
	Zombie *zombies = ZombieHorde(i, "Mikael");

	if (i)
		zombies->announce();
	delete[] zombies;
}
