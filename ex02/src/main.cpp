/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:09:20 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 16:33:22 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << std::left << std::setw(17) << "String address" << " : " << &string << std::endl;
	std::cout << std::left << std::setw(17) << "stringPTR address" << " : " << &stringPTR << std::endl;
	std::cout << std::left << std::setw(17) << "stringREF address" << " : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << std::left << std::setw(29) << "Value of string" << " : " << string << std::endl;
	std::cout << std::left << std::setw(29) << "Value pointed to by stringPTR" << " : " << *stringPTR << std::endl;
	std::cout << std::left << std::setw(29) << "Value referenced by stringREF"  << " : " << stringREF << std::endl;
	
	return (0);
}
