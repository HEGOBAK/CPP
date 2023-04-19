/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:20:50 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 16:51:00 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon {
	private:
		std::string	type;
	public:
		Weapon(std::string type);
		~Weapon(void);

		const	std::string& getType(void);
		void	setType(std::string type);
};