/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:25:39 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 23:42:10 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 145, 137), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): AForm(other), _target(other._target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    (void)other;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (this->getIsSigned() == false)
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getExecIt())
        throw AForm::GradeTooLowException();
    else
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}