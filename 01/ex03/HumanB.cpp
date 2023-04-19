/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:26:07 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 16:55:32 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string name): name(name) {
	this->weapon_type = NULL;
}

HumanB::~HumanB(void) {}

void	HumanB::attack()
{
	if (this->weapon_type->getType() != "" || this->weapon_type != NULL)
		std::cout << this->name << " attacks with their " << this->weapon_type->getType() << std::endl;
	else
		std::cout << "NO WEAPON !" << std::endl;
}

void	HumanB::setWeapon(Weapon& type)
{
	this->weapon_type = &type;
}