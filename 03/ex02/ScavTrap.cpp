/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 02:10:12 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 02:58:29 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->health = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << " ScravTap : Constructor called on " << name << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor called on " << this->name << std::endl;
}

void    ScavTrap::attack(std::string const& target) {
    if (this->energy == 0)
    {
        std::cout << "ScavTrap : " << this->name << " has ran out of energy! " << std::endl;
        return;
    }
    std::cout << "ScavTrap : " << this->name << " attacks " << target << " at range, causing " << this->damage << " points of damage !" << std::endl;
    this->energy -= 1;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap : " << this->name << " is now in Gate keeper mode." << std::endl;
}