/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:57:02 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 11:04:17 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal(void) {}

Animal::Animal(std::string name): type(name) {
    std::cout << "Animal : " << name << " constructor called " << std::endl;
}

Animal::Animal(const Animal& otherAnimal) {
    *this = otherAnimal;
    std::cout << "Animal copy constructor called " << std::endl;
}

Animal& Animal::operator=(const Animal& otherAnimal) {
    std::cout << "Animal assignment operator caled " << std::endl;
    if (this != &otherAnimal)
        this->type = otherAnimal.getType();
    return (*this);
}

Animal::~Animal(void) {
    std::cout << "Animal destructor called " << std::endl;
}

void    Animal::makeSound(void) const {
    std::cout << "Animal makeSound called " << std::endl;
}

std::string Animal::getType(void) const {
    return (this->type);
}