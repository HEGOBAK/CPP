/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:43:38 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 10:18:55 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

int	check_num(std::string num)
{
	int i;

	i = -1;
	while (num[++i])
	{
		if (num[i] != ' ' && !(num[i] >= '0' && num[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **argv)
{
	int			index;
	std::string	option;
	std::string	input[5];
	PhoneBook 	phonebook;
	
	while (1)
	{
		std::cout << "PhoneBook> ";
		std::getline(std::cin, option);
		if (option == "ADD")
		{
			std::cout << " ~ Enter Contact Information ~ " << std::endl;
			std::cout << "First Name: ";
			std::getline(std::cin, input[0]);
			std::cout << "Last Name: ";
			std::getline(std::cin, input[1]);
			std::cout << "NickName: ";
			std::getline(std::cin, input[2]);
			std::cout << "Darkest Secret: ";
			std::getline(std::cin, input[3]);
			do
			{
				std::cout << "Phone Number: ";
				std::getline(std::cin, input[4]);
				if (check_num(input[4]))
					break;
				std::cout << "Please input a valid number" << std::endl;
			} while (!check_num(input[4]));
			phonebook.add_contact(input);
			std::cout << " ~ Contact Added Successfully! ~ " << std::endl;
		}
		else if (option == "SEARCH")
		{
			phonebook.display_phonebook();
			if (phonebook.get_n_contacts() > 0)
			{
				std::cout << "Choose Index: ";
				std::cin >> index;
				while (std::cin.fail() || index < 0 || index >= phonebook.get_n_contacts())
				{
					std::cout << " ~ Invalid Index! ~ " << std::endl;
					std::cout << "Choose Index: ";
					std::cin >> index;
				}
				phonebook.display_contact(index);
				std::getline(std::cin, option);
			}
		}
		else if (option == "EXIT")
			break;
		else
			std::cout << " ~ Invalid command ~ " << std::endl;
	}
}