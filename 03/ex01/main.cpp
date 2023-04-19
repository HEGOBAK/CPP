/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 02:07:06 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 02:59:41 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main()
{
    ClapTrap user("John");
    ScavTrap bot("Bot");
    
    user.attack("President");
    bot.attack("John");
    bot.guardGate();
    
    return (0);
}