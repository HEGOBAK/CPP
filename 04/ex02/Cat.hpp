/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:04:54 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 15:04:53 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AAnimal.hpp"
#include "./Brain.hpp"

class Cat : public AAnimal
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
