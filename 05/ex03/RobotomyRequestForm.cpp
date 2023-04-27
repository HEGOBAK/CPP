/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:35:54 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 23:56:31 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 145, 137), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm(other), _target(other._target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    (void)other;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (this->getIsSigned() == false)
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getExecIt())
        throw AForm::GradeTooLowException();
    else {
        static int  i;
        if (i % 2 == 0)
            std::cout << "DRRRRRT.. "<<this->_target << " has been robotomized" << std::endl;
        else
            std::cout << "robotomy failed on " << this->_target << std::endl;
        i++;
    }
}