/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:26:26 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 17:51:26 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
		bool		_is_armed;
	public:
	// Constructors
		HumanB(std::string name);
	// Deconstructors
		~HumanB(void);
	// Setters
		void	setWeapon(Weapon &weapon);
	// Public methods
		void	attack(void);
};
