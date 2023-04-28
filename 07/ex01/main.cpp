/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:56:02 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 19:01:09 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./iter.hpp"
#include <string>

void iterfun(int &a)
{
	a *= 2;
}

void iterfun(std::string &s)
{
	s = "Kardesim o mallocu yanlis yapiyosun";
}

int	main()
{
	int	a[12];

	for (size_t i = 0; i < 12; i++)
	{
		a[i] = i * 2;
		std::cout << a[i] << " ";
	}
	iter(a, 12, &iterfun);
	std::cout << std::endl;
	for (size_t i = 0; i < 12; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	std::string str[6];
	iter(str, 6, &iterfun);
	for (size_t i = 0; i < 6; i++)
	{
		std::cout << str[i] << std::endl;
	}
}