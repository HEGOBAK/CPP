/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:19:35 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 14:52:47 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog(void): Animal("Dog") {
    std::cout << this->type << " constructor called " << std::endl;
}

Dog::~Dog(void) {
    std::cout << this->type << " destructor called " << std::endl;
}

Dog::Dog(const Dog& otherDog) {
    std::cout << "Dog copy contructor called " << std::endl;
    *this = otherDog;
}

Dog& Dog::operator=(const Dog& otherDog) {
    std::cout << "Dog assignment operator called " << std::endl;
    if (this != &otherDog) {
        this->type = otherDog.type;
    }
    return (*this);
}

void    Dog::makeSound(void) const {
    std::cout << "Dog!" << std::endl;
}