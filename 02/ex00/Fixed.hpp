/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:59:38 by jchu              #+#    #+#             */
/*   Updated: 2023/04/19 12:35:12 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed 
{
private:
	int					_fixedPointValue;
	static const int	_fractionalBits = 8;

public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed& otherFixed);
	Fixed& operator=(const Fixed& otherFixed);
	~Fixed();

	int 	getRawBits(void) const;
	void 	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream& operator<<(std::ostream& 0, const Fixed& fixed);