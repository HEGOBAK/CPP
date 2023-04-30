/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:02:44 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 21:22:27 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class notOccur: public std::exception {
    public:
        const char* what() const throw() {
            return ("No occurence !");
        };
};

template<typename T>
typename T::iterator   easyfind(T &a, int b) {
    typename T::iterator    ret = std::find(a.begin(), a.end(), b);
    if (ret == a.end())
        throw notOccur();
    return (ret);
}

