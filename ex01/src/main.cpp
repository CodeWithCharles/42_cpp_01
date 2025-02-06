/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:47:12 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 16:04:09 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		zombie_amount = 10;

	horde = zombieHorde(zombie_amount, "Horde Member");
	if (horde == NULL)
		return (1);
	for (int i = 0; i < zombie_amount; i++)
		horde[i].announce();
	delete[] horde;
	horde = zombieHorde(0, "Failed");
	return (0);
}
