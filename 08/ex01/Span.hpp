/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:25:04 by jchu              #+#    #+#             */
/*   Updated: 2023/04/30 20:16:27 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
    std::vector<int>    _arr;
    unsigned int    _size;
      
public:
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    // -----------------  Add number ------------------ //
    void    addNumber(int n);
    void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator finish);

    
    // -----------------  Find short/long span ------------------ //
    int     shortestSpan();
    int     longestSpan();
    // -----------------  Exception ------------------ //
    class tooMuch: public std::exception {
        public:
            const char* what() const throw () {
                return ("No more space !");
            }
     };

     class noSpan: public std::exception {
        public:
            const char* what() const throw() {
                return ("Cannot find span !");
            }     
     };
};