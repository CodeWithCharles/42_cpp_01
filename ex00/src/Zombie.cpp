/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:14:37 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 15:18:46 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string s) : _name(s)
{
	std::cout << "We are here to invade you. Sincerely, " << _name << "\n" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " got sent to outer space.\n" << std::endl;
}

void	Zombie::announce(void)const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}
