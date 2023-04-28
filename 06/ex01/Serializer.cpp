/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:25:22 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 15:25:46 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(static_cast<void*>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
    return static_cast<Data*>(reinterpret_cast<void*>(raw));
}
