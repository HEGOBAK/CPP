/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:21:26 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 14:22:07 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {}

WrongAnimal::WrongAnimal(std::string name): type(name) {
    std::cout << "WrongAnimal : " << name << " constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& otherWrongAnimal) {
    *this = otherWrongAnimal;
    std::cout << "WrongAnimal copy constructor called " << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& otherWrongAnimal) {
    std::cout << "WrongAnimal assignment operator caled " << std::endl;
    if (this != &otherWrongAnimal)
        this->type = otherWrongAnimal.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal destructor called " << std::endl;
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal makeSound called " << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return (this->type);
}