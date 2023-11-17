/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:28:52 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/15 15:28:53 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* ZombieHorde(int n, std::string name)
{
	Zombie *zombies;

	zombies = new Zombie[n];
	for (int i = 0;i < n; i++)
		zombies[i].set_name(name);
	return zombies;
}