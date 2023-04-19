/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:27:52 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 16:54:34 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type): name(name), weapon_type(type) {}

HumanA::~HumanA(void) {}

void	HumanA::attack()
{
	if (this->weapon_type.getType() != "")
		std::cout << this->name << " attacks with their " << this->weapon_type.getType() << std::endl;
	else
		std::cout << "NO WEAPON !" << std::endl;
}

