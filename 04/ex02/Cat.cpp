/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:06:06 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 15:05:34 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat(void): AAnimal("Cat") {
    std::cout << this->type << " constructor called " << std::endl;
    try {
        this->brain = new Brain();
    } catch (const std::bad_alloc& e) {
        std::cout << "Memory allocation failled : " << e.what() << std::endl;
    }
}

Cat::~Cat(void) {
    std::cout << this->type << " destructor called " << std::endl;
    delete this->brain;
}

Cat::Cat(const Cat& otherCat) {
    std::cout << "Cat copy contructor called " << std::endl;
    *this = otherCat;
}

Cat& Cat::operator=(const Cat& otherCat) {
    std::cout << "Cat assignment operator called " << std::endl;
    if (this != &otherCat) {
        this->type = otherCat.type;
        this->brain = new Brain(*otherCat.brain);
    }
    return (*this);
}

void    Cat::makeSound(void) const {
    std::cout << "Meow!" << std::endl;
}
