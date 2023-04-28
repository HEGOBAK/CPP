/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:26:23 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 18:54:53 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void    swap(T& a, T& b) {
    T   temp;
    temp = a;
    a = b;
    b = temp;
}

template<typename Tmin>
Tmin  min(Tmin a, Tmin b) {
    if (a < b)
        return (a);
    return (b);
}

template<typename Tmax>
Tmax  max(Tmax a, Tmax b) {
    if (a > b)
        return (a);
    return (b);
}