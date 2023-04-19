/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:20:10 by jchu              #+#    #+#             */
/*   Updated: 2023/04/19 16:59:56 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

int main( void ) 
{
	Fixed       a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0;
}

/* 
	#include <iostream>
	#include <cmath>
	
	std::string toBinary(int n) {
	    if (n==0) return "0";
	    else if (n==1) return "1";
	    else if (n%2 == 0) return toBinary(n/2) + "0";
	    else if (n%2 != 0) return toBinary(n/2) + "1";
	}
	
	int main()
	{
	    std::cout << toBinary(10 << 8) << std::endl;
	    std::cout << toBinary((10 << 8) >> 8) << std::endl;
	    std::cout << (std::roundf(42.42f * (1 << 8))) << std::endl; // 42.42 * 100000000
	    std::cout << (std::roundf(std::roundf(42.42f * (1 << 8)) / (1 << 8))) << std::endl; // 42.42 * 100000000
	    std::cout << toBinary(std::roundf(42.42f * (1 << 8))) << std::endl; // 42.42 * 100000000
	    std::cout << toBinary(std::roundf(std::roundf(42.42f * (1 << 8)) / (1 << 8))) << std::endl; // 42.42 * 100000000
	    return (0);
	}
	
	// 1 << 8 = 1 + 8 zeros 1.00000000 1.0
	// 2 << 8 = 10 + 8 zeros 10.00000000 2.0
	// 10 << 8 =  1010 + 8 zeros 1010.00000000 = 10.0
	
	// 42.42f * (1<<8) = int : 10860 | binary : 01010 01101100 = 42.4238......
	// 42 in binary = 101010
*/