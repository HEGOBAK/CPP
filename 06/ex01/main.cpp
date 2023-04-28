/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:25:47 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 15:32:57 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Serializer.hpp"


int main() {
    // create a Data object
    Data* data = new Data;

    data->x = 42;
    
    // serialize the object
    uintptr_t raw = Serializer::serialize(data);

    // deserialize the object
    Data* deserialized = Serializer::deserialize(raw);

    // check that the deserialized object is equal to the original object
    if (deserialized == data) {
        std::cout << "Serialization and deserialization successful!\n";
    } else {
        std::cout << "Serialization and deserialization failed!\n";
    }

    // free memory
    delete data;
    return 0;
}
