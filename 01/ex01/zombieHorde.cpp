/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:04:02 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 16:13:28 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	int i;

	i = 0;
    Zombie *zomb = new Zombie[N];
	while (i < N)
	{
		zomb[i].setName(name);
		i++;
	}
	return (zomb);
}