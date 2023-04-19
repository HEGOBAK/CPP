/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 02:43:52 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 02:57:26 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    FragTrap();
    
public:
    FragTrap(std::string name);
    ~FragTrap();

    void    highFivesGuys(void);
};
