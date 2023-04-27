/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:32:56 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 22:38:01 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat  test = Bureaucrat("adin", 10);
        Form        test_form = Form("FormName", 10, 11);
        
        test.signForm(test_form);

        std::cout << test_form << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}