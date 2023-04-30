/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:10:58 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 21:24:33 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./easyfind.hpp"
#include <vector>
#include <list>

int main() {
    // test with vector
    std::vector<int> v;
    for (int i = 1; i < 6; i++) {
        v.push_back(i);
    }
    try {
        std::vector<int>::iterator it = easyfind(v, 3);
        std::cout << "Vector : Found value " << *it << " at index " << std::distance(v.begin(), it) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Vector : Error: " << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(v, 6);
        std::cout << "Vector : Found value " << *it << " at index " << std::distance(v.begin(), it) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Vector : Error: " << e.what() << std::endl;
    }

    // test with list
    std::list<int> l;
    for (int i = 10; i < 60; i+= 10) {
        l.push_back(i);
    }
    try {
        std::list<int>::iterator it = easyfind(l, 20);
        std::cout << "List : Found value " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << "List : Error: " << e.what() << std::endl;
    }

    try {
        std::list<int>::iterator it = easyfind(l, 60);
        std::cout << "List : Found value " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << "List : Error: " << e.what() << std::endl;
    }

    return 0;
}
