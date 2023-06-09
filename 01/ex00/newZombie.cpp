/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:23:26 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 16:09:47 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	return (new Zombie(name));
}
