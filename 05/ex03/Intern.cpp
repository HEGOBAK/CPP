/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:57:53 by jchu              #+#    #+#             */
/*   Updated: 2023/04/27 15:21:34 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) {
    *this = other;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return (*this);
}

Intern::~Intern() {}

AForm*   Intern::makeForm(std::string name, std::string target) {
    
    std::string formNames[] = {
      "robotomy request",
      "shrubbery request",
      "presidential request"  
    };

    AForm*   forms[] = {
        new RobotomyRequestForm(target),
        new ShrubberyCreationForm(target),
        new PresidentialPardonForm(target)
    };
    
    for (int i = 0; i < 3; i++) {
        if (name == formNames[i]) {
            std::cout << "Intern creates " << name << std::endl; 
            return (forms[i]);
        }
    }
    std::cout << "Intern cannot create " << name << std::endl;
    return (nullptr);
}