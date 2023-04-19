/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:59:35 by jchu              #+#    #+#             */
/*   Updated: 2023/04/19 11:49:15 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed() {
	this->_fixedPointValue = 0;
	std::cout << "Constructor called " << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called " << std::endl;
}

Fixed::Fixed(const Fixed& otherFixed) {
	std::cout << "Copy constructor called " << std::endl;
	this->setRawBits(otherFixed.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& otherFixed) {
	std::cout << "Copy assignment contructor called " << std::endl;
	if (this != &otherFixed)
		this->_fixedPointValue = otherFixed.getRawBits();
	return (*this);
}


int 	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called " << std::endl;
	return (this->_fixedPointValue);
}

void 	Fixed::setRawBits( int const raw ) {
	this->_fixedPointValue = raw;
}
