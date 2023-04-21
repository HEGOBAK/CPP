/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:29:22 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 14:34:30 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain& src)
{
    *this = src;
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "Brain copy called." << std::endl;
    if ( this != &src ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = src.ideas[i];
        }
    }
    return *this;
}
