/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:33:00 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 23:52:04 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
    if (grade < 1) 
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other.getName()), _grade(other.getGrade()) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other)
        this->_grade = other.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const {
    return (this->_name);
}

int   Bureaucrat::getGrade() const {
    return (this->_grade);
}

void    Bureaucrat::increment() {
    if (_grade <= 1)   
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void    Bureaucrat::decrement() {
    if (_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

void    Bureaucrat::signForm(AForm& form) {
    try {
        form.beSigned( *this );
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    } catch (AForm::GradeTooLowException& e) {
        std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void   Bureaucrat::executeForm(const AForm& form) {
    try {
        form.execute( *this );
    } catch (std::exception& e) {
        std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& i) {
    o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
    return (o);
}