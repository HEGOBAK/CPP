/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:52:31 by jchu              #+#    #+#             */
/*   Updated: 2023/04/20 11:08:23 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
    
public:
    Animal(void);
    Animal(std::string name);
    Animal(const Animal& otherAnimal);
    Animal& operator=(const Animal& otherAnimal);
    virtual ~Animal(void);

    virtual void makeSound(void) const;
    std::string getType(void) const;
};