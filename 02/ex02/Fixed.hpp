/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:59:38 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 01:32:17 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    Fixed( void );
    Fixed( const int n );
    Fixed( const float n );
    Fixed( const Fixed &otherFixed );
    ~Fixed();
    Fixed& operator=( const Fixed& otherFixed );
    
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    float   toFloat( void ) const;
    int     toInt( void ) const;

    bool    operator>(const Fixed& otherFixed) const;
    bool    operator<(const Fixed& otherFixed) const;
    bool    operator>=(const Fixed& otherFixed) const;
    bool    operator<=(const Fixed& otherFixed) const;
    bool    operator==(const Fixed& otherFixed) const;
    bool    operator!=(const Fixed& otherFixed) const;
    
    Fixed   operator+(const Fixed& otherFixed) const ;
    Fixed   operator-(const Fixed& otherFixed) const;
    Fixed   operator*(const Fixed& otherFixed) const;
    Fixed   operator/(const Fixed& otherFixed) const;

    Fixed&  operator++(void);
    Fixed   operator++(int);
    Fixed&  operator--(void);
    Fixed   operator--(int);
    
    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max( const Fixed &a, const Fixed &b );
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );
