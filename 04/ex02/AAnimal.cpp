/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:57:02 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 11:04:17 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AAnimal.hpp"

AAnimal::AAnimal(void) {}

AAnimal::AAnimal(std::string name): type(name) {
    std::cout << "AAnimal : " << name << " constructor called " << std::endl;
}

AAnimal::AAnimal(const AAnimal& otherAAnimal) {
    *this = otherAAnimal;
    std::cout << "AAnimal copy constructor called " << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& otherAAnimal) {
    std::cout << "AAnimal assignment operator caled " << std::endl;
    if (this != &otherAAnimal)
        this->type = otherAAnimal.getType();
    return (*this);
}

AAnimal::~AAnimal(void) {
    std::cout << "AAnimal destructor called " << std::endl;
}

void    AAnimal::makeSound(void) const {
    std::cout << "AAnimal makeSound called " << std::endl;
}

std::string AAnimal::getType(void) const {
    return (this->type);
}