/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:04:54 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 14:49:07 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat(void);
    ~Cat(void);
    Cat(const Cat& otherCat);
    Cat& operator=(const Cat& otherCat);
    
    void    makeSound(void) const;
};
