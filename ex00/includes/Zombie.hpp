/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 07:36:28 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 15:20:38 by cpoulain         ###   ########.fr       */
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
		Zombie(std::string s);

	// Destructors
		~Zombie();

	// Public methods
		void	announce(void)const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
