/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:04:33 by cpoulain          #+#    #+#             */
/*   Updated: 2025/02/06 18:25:20 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>

std::string	search_and_replace(std::string buffer, const std::string search, const std::string replace)
{
	size_t	search_length = search.length();
	size_t	replace_length = replace.length();
	size_t	pos_search = 0;

	pos_search = buffer.find(search);
	while (pos_search != std::string::npos)
	{
		buffer.erase(pos_search, search_length);
		buffer.insert(pos_search, replace);
		pos_search = buffer.find(search, pos_search + replace_length);
	}
	return (buffer);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		std::cout << "Usage:\t./search_and_replace <file_name> <search> <replace>" << std::endl;
		return (1);
	}
	else
	{
		const std::string	filename = argv[1];
		const std::string	search = argv[2];
		const std::string	replace = argv[3];
		std::string			buffer;
		std::ifstream		infile;
		std::ofstream		outfile;

		infile.open(argv[1]);
		if (infile.is_open() == true)
		{
			outfile.open((filename + ".replace").c_str(), std::ios::out | std::ios::trunc );
			if (outfile.is_open() == true)
			{
				while (std::getline(infile, buffer))
				{
					buffer = search_and_replace(buffer, search, replace);
					outfile << buffer;
					if (infile.peek() != EOF)
						outfile << std::endl;
				}
				outfile.close();
			}
			else
			{
				std::perror("Could not open outfile.");
				infile.close();
				return (1);
			}
			infile.close();
		}
		else
		{
			std::perror("Could not open infile.");
			std::cout << "Outfile was not create or truncated." << std::endl;
			return (1);
		}
		return (0);
	}
}
