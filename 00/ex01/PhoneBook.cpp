/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:42:58 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 10:10:14 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

void	print_name(std::string str)
{
	int	i;

	i = 0;
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << '.';
	else
	{
		while (i++ < 10 - str.length())
			std::cout << ' ';
		std::cout << str;
	}
}

int		PhoneBook::get_n_contacts(void)
{
	return (this->n_contacts);
}

void	PhoneBook::add_contact(std::string input[5])
{
	int	i;

	i = this->i;
	this->contacts[i].setFn(input[0]);
	this->contacts[i].setLn(input[1]);
	this->contacts[i].setNn(input[2]);
	this->contacts[i].setSecret(input[3]);
	this->contacts[i].setNum(input[4]);
	this->i = (i + 1) % 8;

	if (this->n_contacts < 8)
		this->n_contacts++;
}

void	PhoneBook::display_phonebook(void)
{
	int i;

	i = 0;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (i < this->n_contacts)
	{
		std::cout << "|         " << i;
		std::cout << "|";
		print_name(this->contacts[i].getFn());
		std::cout << "|";
		print_name(this->contacts[i].getLn());
		std::cout << "|";
		print_name(this->contacts[i].getNn());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "+----------+----------+----------+----------+\n" << std::endl;
}

void	PhoneBook::display_contact(int i)
{
	std::cout << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  Contact information for specified index  |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	std::cout << " ~ Displaying index [ " << i << " ] ~" << std::endl;
	std::cout << "   | ~ First Name: " << this->contacts[i].getFn() << std::endl;
	std::cout << "   | ~ Last Name: " << this->contacts[i].getLn() << std::endl;
	std::cout << "   | ~ Nickname: " << this->contacts[i].getNn() << std::endl;
	std::cout << "   | ~ Darkest Secret: " << this->contacts[i].getSecret() << std::endl;
	std::cout << "   | ~ Number: " << this->contacts[i].getNum() << std::endl;
	std::cout << std::endl;
}

