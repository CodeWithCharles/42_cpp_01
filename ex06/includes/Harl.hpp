/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:22:40 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/10 12:45:28 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>

class Harl
{
	private:

	// Class' private attributes
		static std::string	_verbose_level[4];

	// Class' private methods
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		
	// Class' private enums
		enum VerboseLevel
		{
			DEBUG = 0,
			INFO,
			WARNING,
			ERROR
		};

	public:

	// Constructor
		Harl();

	// Destructor
		~Harl();

	// Class' public methods
		void	complain(std::string level);
};
