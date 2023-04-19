/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:59:35 by jchu              #+#    #+#             */
/*   Updated: 2023/04/19 12:59:52 by jchu             ###   ########.fr       */
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

Fixex::Fixed(const int n) {
	this->_fixedPointValue = (n << _fractionalBits);
	std::cout << 'Int constructor called ' << std::endl;
}

Fixex::Fixed(const int n) {
	this->_fixedPointValue = (n * ( 1 << _fractionalBits);
	std::cout << 'Int constructor called ' << std::endl;
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

void	Fixed::toFloat(void) const{
	return (this->_fixedPointValue / ( 1 >> _fractionalBits));
}

void	Fixed::toInt(void) const{
	return (this->_fixedPointValue >> _fractionalBits);
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed){
	o << fixex.toFloat();
	return (o);
}