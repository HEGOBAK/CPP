/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 01:45:08 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 02:06:14 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    std::cout << "Constructor called on " << name << std::endl;
    this->name = name;
    this->health = 10;
    this->energy = 10;
    this->damage = 10;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destrcutor called on " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& otherClapTrap) {
    *this = otherClapTrap;
    std::cout << "Copy constructor called on " << otherClapTrap.name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& otherClapTrap) {
    this->name = otherClapTrap.name;
    this->health = otherClapTrap.health;
    this->energy = otherClapTrap.energy;
    this->damage = otherClapTrap.damage;
    return (*this);
}

void ClapTrap::attack(const std::string& target) {
    if (this->energy == 0)
    {
        std::cout << "This " << this->name << " has ran out of energy! " << std::endl;
        return;
    }
    this->energy -= 1;
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->energy <= amount)
    {
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount << " damage!" << std::endl;
    this->health -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy <= amount)
    {
        std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " hit points!" << std::endl;
    this->energy -= 1;
    this->health += amount;
}
