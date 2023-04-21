/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:18:40 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 14:51:51 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog(void);
    ~Dog(void);
    Dog(const Dog& otherDog);
    Dog& operator=(const Dog& otherDog);
    
    void    makeSound(void) const;
};
