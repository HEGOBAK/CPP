/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:25:06 by jchu              #+#    #+#             */
/*   Updated: 2023/04/30 20:29:29 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    Span sp1 = Span(5);
    std::vector<int> v;
    v.push_back(15);
    v.push_back(12);
    v.push_back(1);
    v.push_back(8);
    v.push_back(9);
    sp1.addNumber(v.begin(), v.end());
    std::cout << "Shortest span after adding vector: " << sp1.shortestSpan() << std::endl;

    Span sp2 = Span(1);
    try {
        sp2.shortestSpan();
    } catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    Span sp3 = Span(5);
    try {
        sp3.addNumber(1);
        sp3.addNumber(2);
        sp3.addNumber(3);
        sp3.addNumber(4);
        sp3.addNumber(5);
        sp3.addNumber(6);
    } catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

// Output : 
// Shortest span: 2
// Longest span: 14
// Shortest span after adding vector: 1
// Exception caught: Cannot find span !
// Exception caught: No more space !