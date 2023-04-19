/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 01:41:03 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 02:35:16 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string     name;
    unsigned int    health;
    unsigned int    energy;
    unsigned int    damage;
    
    ClapTrap();
    
public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& otherClapTrap);
    ClapTrap& operator=(const ClapTrap& otherClapTrap);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
