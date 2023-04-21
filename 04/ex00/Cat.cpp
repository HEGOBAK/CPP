/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:06:06 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 14:44:58 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat(void): Animal("Cat") {
    std::cout << this->type << " constructor called " << std::endl;
}

Cat::~Cat(void) {
    std::cout << this->type << " destructor called " << std::endl;
}

Cat::Cat(const Cat& otherCat) {
    std::cout << "Cat copy contructor called " << std::endl;
    *this = otherCat;
}

Cat& Cat::operator=(const Cat& otherCat) {
    std::cout << "Cat assignment operator called " << std::endl;
    if (this != &otherCat) {
        this->type = otherCat.type;
    }
    return (*this);
}

void    Cat::makeSound(void) const {
    std::cout << "Meow!" << std::endl;
}
