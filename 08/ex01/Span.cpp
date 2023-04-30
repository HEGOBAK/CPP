/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:32:36 by jchu              #+#    #+#             */
/*   Updated: 2023/04/30 20:29:03 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Span.hpp"

Span::Span(unsigned int N): _size(N) {}

Span::~Span() {}

Span::Span(const Span& other) {
    this->_arr = other._arr;
    this->_size = other._size;
}

Span& Span::operator=(const Span& other) {
    this->_arr = other._arr;
    this->_size = other._size;
    return (*this);
}

void    Span::addNumber(int n) {
    if (this->_arr.size() == this->_size)
        throw   Span::tooMuch();
    else 
        this->_arr.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator finish)
{
	std::vector<int> tmp(start, finish);

	if (tmp.size() > (_size - _arr.size()))
		throw tooMuch();
	std::copy(tmp.begin(), tmp.end(), std::back_inserter(_arr));
}

int     Span::shortestSpan() {
    if (this->_arr.size() < 2)
        throw Span::noSpan();
    int smallestSpan = 2147483647;
    std::vector<int>    arrCopy = this->_arr;

    std::sort(arrCopy.begin(), arrCopy.end());
    
    for (int i = 1; i < arrCopy.size(); i++) {
        int diff = arrCopy[i] - arrCopy[i - 1];
        if (diff < smallestSpan)
            smallestSpan = diff;
    }
    if (smallestSpan == 0)
        throw Span::noSpan();
    else
        return (smallestSpan);
}

int     Span::longestSpan() {
    std::vector<int>::iterator max = std::max_element(this->_arr.begin(), this->_arr.end());
    std::vector<int>::iterator min = std::min_element(this->_arr.begin(), this->_arr.end());
    if (max == min)
        throw Span::noSpan();
    else
        return (*max -  *min);
}

