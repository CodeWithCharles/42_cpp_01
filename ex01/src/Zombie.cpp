/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:14:37 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 16:00:54 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { }

Zombie::~Zombie()
{
	std::cout << this->_name << " got sent to outer space.\n" << std::endl;
}

void	Zombie::announce(void)const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}
