/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:27:30 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/20 10:38:33 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

std::string	Harl::_verbose_level[4] = {
	"[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!",
	"[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!",
	"[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.",
	"[ERROR]\nThis is unacceptable! I want to speak to the manager now."
};

// Constructor & destructor

Harl::Harl() { }
Harl::~Harl() { }

// Private methods

void	Harl::debug(void)
{
	std::cout << _verbose_level[0] << std::endl;
}

void	Harl::info(void)
{
	std::cout << _verbose_level[1] << std::endl;
}

void	Harl::warning(void)
{
	std::cout << _verbose_level[2] << std::endl;
}

void	Harl::error(void)
{
	std::cout << _verbose_level[3] << std::endl;
}

// Public methods

void	Harl::complain(std::string level)
{
	void	(Harl::*levelFunctions[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	for (; i < 4; i++)
	{
		if (complaints[i] == level)
			break ;
	}
	switch (i)
	{
		case(0):
			(this->*levelFunctions[0])();
		case(1):
			(this->*levelFunctions[1])();
		case(2):
			(this->*levelFunctions[2])();
		case(3):
			(this->*levelFunctions[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}
