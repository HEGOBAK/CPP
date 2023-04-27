/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:55:58 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 22:41:59 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

Form::Form(std::string name, int signIt, int execIt): _name(name), _signIt(signIt), _execIt(execIt) {
    if (signIt < 1 || execIt < 1) 
        throw Form::GradeTooHighException();
    if (signIt > 150 || execIt > 150)
        throw Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form& other): _name(other.getName()), _signIt(other.getSignIt()), _execIt(other.getExecIt()) { }

Form& Form::operator=(const Form& other) {
    if (this != &other)
        this->_isSigned = other.getIsSigned();
    return (*this);
}

std::string Form::getName() const {
    return (this->_name);
}

bool        Form::getIsSigned() const {
    return (this->_isSigned);
}

const int   Form::getSignIt() const {
    return (this->_signIt);
}

const int   Form::getExecIt() const {
    return (this->_execIt);
}

void        Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= this->_signIt)
        this->_isSigned = true;
    else
        throw Form::GradeTooHighException();
}

std::ostream& operator<<(std::ostream& o, const Form& i) {
    o << " ---------------------------------------" << std::endl;
    o << "   |   Name : " << i.getName() << "               |"<< std::endl;
    o << "   |   Grade required to sign : " << i.getSignIt() << "   |" << std::endl;
    o << "   |   Grade required to exec : " << i.getExecIt() << "   |" << std::endl;
    o << " ---------------------------------------" << std::endl;
    return (o);
}