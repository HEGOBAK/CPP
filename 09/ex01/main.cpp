/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:28:10 by jchu              #+#    #+#             */
/*   Updated: 2023/05/03 02:48:42 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RPN.hpp"

int main(int ac, char** av) {
    if (ac != 2) {
		std::cerr << "Wrong Use! ./program \"operations\"" << std::endl;
        return (-1);
    }

    RPN calc;
    int ret;

    try {
        ret = calc.calculate(av[1]);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return (-1);
    }

    std::cout << ret << std::endl;
    return (1);
}

// ------------ Test_Script ------------ //
// ./RPN "3 4 + 5 *" 
// Expected output: 35
// ./RPN "9 3 - 3 /" 
// Expected output: 2
// ./RPN "2 0 * 6 /" 
// Expected output: 0
// ./RPN "2 0 /" 
// Expected output: Error: Division by zero
// ./RPN "5 3 + 7 - 2 * 2 /" 
// Expected output: 1
// ./RPN "3 +" 
// Expected output: Error: Not enough operands
// ./RPN "3 3 * 4 + abc" 
// Expected output: Error: Invalid expression
