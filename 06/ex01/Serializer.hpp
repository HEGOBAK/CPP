/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:56:58 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 15:31:51 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma

#include <cstdint>
#include <iostream>

struct Data {
    int x;
};

class Serializer {
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};