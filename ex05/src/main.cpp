/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:36:32 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/10 12:42:52 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main()
{
	Harl		harl;
	std::string	input;

	std::cout << "Hello Harl ! What are you here for ?" << std::endl << "input [DEBUG, INFO, WARNING, ERROR] : ";
	while(getline(std::cin, input))
	{
		if (std::cin.eof() == true)
		{
			std::cerr << "^D" << std::endl;
			return (1);
		}
		harl.complain(input);
		std::cout << std::endl;
		std::cout << "input [DEBUG, INFO, WARNING, ERROR] : ";
	}
	return (0);
}
