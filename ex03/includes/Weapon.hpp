/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:16:26 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 17:52:50 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string	_type;
	
	public:
		
	// Constructors
		Weapon(const std::string &weapon);
	// Destructors
		~Weapon();
	// Getters
		std::string	getType()const;
	// Setters
		void		setType(const std::string &weapon);
};
