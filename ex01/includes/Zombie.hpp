/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 07:36:28 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 16:00:30 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string	_name;
	public:
		
	// Constructors
		Zombie();

	// Destructors
		~Zombie();

	// Public methods
		void	announce(void)const;
		void	set_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
