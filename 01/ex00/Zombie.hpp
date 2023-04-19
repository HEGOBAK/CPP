/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:23:34 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 16:09:05 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie {
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);