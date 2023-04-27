/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:55:58 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 23:54:14 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AForm.hpp"

AForm::AForm(std::string name, int signIt, int execIt): _name(name), _signIt(signIt), _execIt(execIt) {
    if (signIt < 1 || execIt < 1) 
        throw AForm::GradeTooHighException();
    if (signIt > 150 || execIt > 150)
        throw AForm::GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(const AForm& other): _name(other.getName()), _signIt(other.getSignIt()), _execIt(other.getExecIt()) { }

AForm& AForm::operator=(const AForm& other) {
    if (this != &other)
        this->_isSigned = other.getIsSigned();
    return (*this);
}

std::string AForm::getName() const {
    return (this->_name);
}

bool        AForm::getIsSigned() const {
    return (this->_isSigned);
}

const int   AForm::getSignIt() const {
    return (this->_signIt);
}

const int   AForm::getExecIt() const {
    return (this->_execIt);
}

void        AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= this->_signIt)
        this->_isSigned = true;
    else
        throw AForm::GradeTooHighException();
}

std::ostream& operator<<(std::ostream& o, const AForm& i) {
    o << " ---------------------------------------" << std::endl;
    o << "   |   Name : " << i.getName() << "               |"<< std::endl;
    o << "   |   Grade required to sign : " << i.getSignIt() << "   |" << std::endl;
    o << "   |   Grade required to exec : " << i.getExecIt() << "   |" << std::endl;
    o << " ---------------------------------------" << std::endl;
    return (o);
}