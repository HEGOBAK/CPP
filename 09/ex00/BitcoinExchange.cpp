/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:49:13 by jchu              #+#    #+#             */
/*   Updated: 2023/05/02 15:19:10 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BitcoinExchange.hpp"

Data::Data(): _date(""), _value(0) {}

Data::Data(std::string s, int v): _date(s), _value(v) {}

Data& Data::operator=(const Data& other) {
    _date = other.getDate();
    _value = other.getValue();
    return (*this);
}

void	Data::wrongdateformat(std::string input)
{
	_date = "Error: bad input -> " + std::string(input.begin(), input.begin() + input.find(','));
	_value = -1;
}

float Data::getValue() const { 
    return (_value);
}

std::string	Data::getDate() const { 
    return (_date); 
}

void	Data::setDate(std::string d) {
     _date = d; 

}

void	Data::setValue(float i) { 
    _value = i; 
}
