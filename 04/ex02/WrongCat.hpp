/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:20:12 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 14:27:04 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
public:
    WrongCat(void);
    ~WrongCat(void);
    
    void    makeSound(void) const;
};
