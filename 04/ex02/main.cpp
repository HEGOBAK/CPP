/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:39:51 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 15:05:24 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongCat.hpp"

/*
    The order of constructor and destructor:
        1. Base constructor
        2. Derived constructor
        3. Derived destructor
        4.Base destructor
*/

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;
    delete i;

    Dog basic;
    {
        Dog tmp = basic;
    }

    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}