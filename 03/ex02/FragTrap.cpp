/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 02:43:55 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 02:58:11 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << " ScravTap : Constructor called on " << name << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor called on " << this->name << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    if ( this->energy == 0 ) {
        std::cout << "FragTrap : " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "FragTrap : " << this->name << " high fives everybody." << std::endl;
    this->energy -= 1;
}
