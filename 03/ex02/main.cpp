/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 02:07:06 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 03:00:22 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

int main()
{
    ClapTrap user("John");
    FragTrap frag("flag");
    
    user.attack("President");
    frag.attack("John");
    frag.highFivesGuys();
    
    
    return (0);
}