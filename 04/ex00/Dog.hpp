/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:18:40 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 14:46:06 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"

class Dog : public Animal
{
private:

public:
    Dog(void);
    Dog(const Dog& otherDog);
    Dog& operator=(const Dog& otherDog);
    ~Dog(void);
    
    void    makeSound(void) const;
};
