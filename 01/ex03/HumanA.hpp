/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:22:56 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 16:43:34 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon&	weapon_type;
	public:
		HumanA(std::string name, Weapon& type);
		~HumanA(void);

		void	attack();
};