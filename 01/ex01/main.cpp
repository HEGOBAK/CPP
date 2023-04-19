/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:07:41 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 16:08:48 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	int n;

	n = 3;

    Zombie *zombiz = zombieHorde(n, "zombi");
    for (size_t i = 0; i < n; i++) {
        zombiz[i].announce();
    }

    delete [] zombiz;
    return 0;
}