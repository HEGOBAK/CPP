/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:10:26 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 20:20:20 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Array.hpp"

int main(int, char**)
{
	Array<int> numbers(42);
	int* mirror = new int[42];
	srand(time(NULL));
	for (int i = 0; i < 42; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < 42; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " u cant use negative numbers" << '\n';
	}
	try
	{
		numbers[42] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " u should 42 - 1" << '\n';
	}

	for (int i = 0; i < 42; i++)
	{
		numbers[i] = rand();
	}

	delete [] mirror;//
	return 0;
}