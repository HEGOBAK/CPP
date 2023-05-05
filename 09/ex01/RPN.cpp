/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:28:11 by jchu              #+#    #+#             */
/*   Updated: 2023/05/03 02:38:19 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int RPN::calculate(std::string input) {
    int         operand1, operand2;
    std::string token;

    for (size_t i = 0; i < input.length(); i++) {
        if (isdigit(input[i])) {
            token = "";
            while (isdigit(input[i])) {
                token += input[i];
                i++;
            }
            i--;
            
            m_stack.push(stoi(token));
        } else if (input[i] == '+' || input[i] == '-' 
                    || input[i] == '*' || input[i] == '/'){
            if (m_stack.size() < 2) 
                throw std::invalid_argument("Error: Not enough operands");
            operand2 = m_stack.top();
            m_stack.pop();
            operand1 = m_stack.top();
            m_stack.pop();

            switch (input[i]) {
                case '+':
                    m_stack.push(operand1 + operand2);
                    break;
                case '-':
                    m_stack.push(operand1 - operand2);
                    break;
                case '*':
                    m_stack.push(operand1 * operand2);
                    break;
                case '/':
                    if (operand2 == 0)
                        throw std::invalid_argument("Error: Divison by zero");
                    m_stack.push(operand1 / operand2);
                    break;
                default:
                    continue;
            }
        } else if (isspace(input[i])) {
            continue;
        } else {
            throw std::invalid_argument("Error: Invalid character");
        }
    }
    
    if (m_stack.size() != 1) 
        throw std::invalid_argument("Error: Too many operands");
    return (m_stack.top());
}