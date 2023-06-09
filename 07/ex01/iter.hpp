/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:56:04 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 20:05:51 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void    iter(T arr[], size_t len, void(f)(T &)) {
    for (int i = 0; i < len; i++) {
        f(arr[i]);
    }
}