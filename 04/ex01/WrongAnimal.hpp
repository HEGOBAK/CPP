/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:21:16 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 14:22:34 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;
    
public:
    WrongAnimal(void);
    WrongAnimal(std::string name);
    WrongAnimal(const WrongAnimal& otherWrongAnimal);
    WrongAnimal& operator=(const WrongAnimal& otherWrongAnimal);
    virtual ~WrongAnimal(void);

    virtual void makeSound(void) const;
    std::string getType(void) const;
};
