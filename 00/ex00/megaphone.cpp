/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 07:17:15 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 07:34:55 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	toUpper(char **str)
{
	int	i;

	i = 0;
	while ((*str)[i])
	{
		if ((*str)[i] >= 'a' && (*str)[i] <= 'z')
			(*str)[i] -= 32;
		i++;
	}
}

int	main(int ac, char **argv)
{
	int	i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < ac)
		{
			toUpper(&argv[i]);
			std::cout << argv[i];
			i++;
		}
		std::cout << "\n";
	}
	return (1);
}