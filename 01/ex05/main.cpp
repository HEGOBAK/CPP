/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:30:53 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 17:52:11 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int main()
{
	Harl        harl;
    std::string input;

    do
    {
        std::cout << "Enter a level: ";
        std::cin >> input;
        harl.complain(input);
    } while (input.compare("exit"));

    return (0);
}