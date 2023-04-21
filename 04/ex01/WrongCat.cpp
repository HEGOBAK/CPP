/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:22:55 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 14:53:31 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {
    std::cout << this->type << " constructor called " << std::endl;
}

WrongCat::~WrongCat(void) {
    std::cout << this->type << " destructor called " << std::endl;
}

void    WrongCat::makeSound(void) const {
    std::cout << "WrongCat Meoom!" << std::endl;
}