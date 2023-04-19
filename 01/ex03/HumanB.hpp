/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:22:58 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 16:47:53 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon*	weapon_type;
	public:
		HumanB(std::string name);
		~HumanB(void);

		void	attack();
		void	setWeapon(Weapon& weapon);
};