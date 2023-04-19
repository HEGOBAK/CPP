/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 02:10:14 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 02:30:57 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    ScavTrap();
    
public:
    ScavTrap(std::string name);
    ~ScavTrap();

    void    attack(std::string const& target);
    void    guardGate();
};
