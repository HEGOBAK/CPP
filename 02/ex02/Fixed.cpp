/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:59:35 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 01:38:04 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : _fixedPointValue( n << _fractionalBits ) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : _fixedPointValue( std::roundf( n * ( 1 << _fractionalBits ) ) ) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &otherFixed ) {
    std::cout << "Copy constructor called" << std::endl;
    // this->setRawBits(otherFixed.getRawBits());
    *this = otherFixed;
}

Fixed& Fixed::operator=( const Fixed &otherFixed ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &otherFixed )
        this->_fixedPointValue = otherFixed.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    return this->_fixedPointValue;
}

void    Fixed::setRawBits( int const raw ) {
    this->_fixedPointValue = raw;
}

float   Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits );
}

int     Fixed::toInt( void ) const {
    return this->_fixedPointValue >> _fractionalBits;
}

// Comparison Operator 
bool    Fixed::operator>(const Fixed& otherFixed) const {
    return (this->getRawBits() > otherFixed.getRawBits());
}

bool    Fixed::operator<(const Fixed& otherFixed) const {
    return (this->getRawBits() < otherFixed.getRawBits());
}

bool    Fixed::operator>=(const Fixed& otherFixed) const {
    return (this->getRawBits() >= otherFixed.getRawBits());
}

bool    Fixed::operator<=(const Fixed& otherFixed) const {
    return (this->getRawBits() <= otherFixed.getRawBits());
}

bool    Fixed::operator==(const Fixed& otherFixed) const {
    return (this->getRawBits() == otherFixed.getRawBits());
}

bool    Fixed::operator!=(const Fixed& otherFixed) const {
    return (this->getRawBits() != otherFixed.getRawBits());
}
    
// Arithmetic operator
Fixed   Fixed::operator+(const Fixed& otherFixed) const {
    return Fixed(this->toFloat() + otherFixed.toFloat());
}

Fixed   Fixed::operator-(const Fixed& otherFixed) const {
    return Fixed(this->toFloat() - otherFixed.toFloat());
}

Fixed  Fixed::operator*(const Fixed& otherFixed) const {
    return Fixed(this->toFloat() * otherFixed.toFloat());
}

Fixed   Fixed::operator/(const Fixed& otherFixed) const {
        return Fixed(this->toFloat() / otherFixed.toFloat());

}

// Increment & Decrement Operator
Fixed&  Fixed::operator++(void) {
    ++this->_fixedPointValue;
    return (*this);
}

Fixed   Fixed::operator++(int) {
    Fixed tmp;
    tmp._fixedPointValue = this->_fixedPointValue;
    this->_fixedPointValue++;
    return (tmp);
}

Fixed&  Fixed::operator--(void) {
    --this->_fixedPointValue;
    return (*this);
}

Fixed   Fixed::operator--(int) {
    Fixed tmp;
    tmp._fixedPointValue = this->_fixedPointValue;
    this->_fixedPointValue++;
    return (tmp);
}

// Max and Min
Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return (a.getRawBits() > b.getRawBits() ? b : a);    
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    return (a.getRawBits() > b.getRawBits() ? b : a);    
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a.getRawBits() > b.getRawBits() ? a : b);    
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    return (a.getRawBits() > b.getRawBits() ? a : b);    
}


std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}