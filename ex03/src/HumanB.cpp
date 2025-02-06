/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:41:27 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 17:55:41 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_is_armed = false;
	std::cout << "A new challenger : "<< this->_name << " has arrived and is ready to battle." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " has retired." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	this->_is_armed = true;
	std::cout << this->_name << " has picked up a " << this->_weapon->getType() << std::endl;
}

void	HumanB::attack(void)
{
	if (this->_is_armed)
	{
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << "." << std::endl;
	}
	else
	{
		std::cout << this->_name << " attacks with his barehands." << std::endl;
	}
}
