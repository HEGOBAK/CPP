/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:59:45 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 16:11:29 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie {
	private:
		std::string	name;
	public:
		Zombie();
		~Zombie(void);

		void	setName(std::string name);
		void	announce(void);
};

Zombie*    zombieHorde( int N, std::string name );
