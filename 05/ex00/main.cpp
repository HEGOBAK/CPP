/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:32:56 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 19:07:44 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat test = Bureaucrat("adin", 1);

        std::cout << test << std::endl;
        
        test.increment();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}