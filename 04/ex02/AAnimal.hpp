/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:52:31 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 15:02:17 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "./Brain.hpp"

class AAnimal
{
protected:
    std::string type;
    
public:
    AAnimal(void);
    AAnimal(std::string name);
    AAnimal(const AAnimal& otherAAnimal);
    AAnimal& operator=(const AAnimal& otherAAnimal);
    virtual ~AAnimal(void);

    virtual void makeSound(void) const = 0;
    std::string getType(void) const;
};