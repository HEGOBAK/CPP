/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 03:31:14 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 04:08:52 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverter.hpp"

void	printType(char c)
{
	std::cout << "Char: ";
	if (c < 0)
		std::cout << "Impossible";
	else if (c < 32 || c > 126)
		std::cout << " Non displayable";
	else
		std::cout << "'" << c << "'";
	std::cout << std::endl;
}

void	printType(int i)
{
	std::cout << "Int: ";
	if (i == -1)
		std::cout << "Impossible";
	else
		std::cout << i;
	std::cout << std::endl;
}

void	printType(float i)
{
	std::cout << "Float: ";
	if (i == -1)
		std::cout << "Impossible";
	else if (std::isnan(i))
		std::cout << "nanf";
	else
	{
		std::cout << i;
		(i - floor(i)) > 0.0f ? std::cout << "f" : std::cout << ".0f";
	}
	std::cout << std::endl;
}

void	printType(double i)
{
	std::cout << "Double: ";
	if (i == -1)
		std::cout << "Impossible";
	else if (std::isnan(i))
		std::cout << "nan";
	else
	{
		std::cout << i;
		if (!((i - floor(i)) > 0.0f))
			std::cout << ".0";
	}
	std::cout << std::endl;
}

int main(int ac, char **av) {
    if (ac < 2) {
        std::cerr << "Usage: " << av[0] << " value\n";
        return 1;
    }
    std::string str = av[1];
    printType(ScalarConverter<char>::convert(str));
    printType(ScalarConverter<int>::convert(str));
    printType(ScalarConverter<float>::convert(str));
    printType(ScalarConverter<double>::convert(str));
    return 0;
}