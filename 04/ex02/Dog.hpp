/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:18:40 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 15:04:55 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AAnimal.hpp"
#include "./Brain.hpp"

class Dog : public AAnimal
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
