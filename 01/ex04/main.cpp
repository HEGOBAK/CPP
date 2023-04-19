/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:01:03 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 17:12:50 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Replace.hpp"

int main(int ac, char **argv)
{
	if (ac != 4)
	{
        std::cerr << "Usage: ./SedV2 <filename> <to_find> <replace>." << std::endl;
		return (-1);
	}
	Replace starter(argv[1]);
	starter.replace(argv[2], argv[3]);
	return (0);
}