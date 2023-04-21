/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:19:35 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 15:05:46 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog(void): AAnimal("Dog") {
    std::cout << this->type << " constructor called " << std::endl;
    try {
        this->brain = new Brain();
    } catch (const std::bad_alloc& e) {
        std::cout << "Memory alloDogion failled : " << e.what() << std::endl;
    }
}

Dog::~Dog(void) {
    std::cout << this->type << " destructor called " << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog& otherDog) {
    std::cout << "Dog copy contructor called " << std::endl;
    *this = otherDog;
}

Dog& Dog::operator=(const Dog& otherDog) {
    std::cout << "Dog assignment operator called " << std::endl;
    if (this != &otherDog) {
        this->type = otherDog.type;
        this->brain = new Brain(*otherDog.brain);
    }
    return (*this);
}

void    Dog::makeSound(void) const {
    std::cout << "Dog!" << std::endl;
}
