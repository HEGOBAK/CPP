/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:32:58 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 23:50:25 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "./AForm.hpp"

class AForm;

class Bureaucrat 
{
private:
    const std::string   _name;
    int                 _grade;

    Bureaucrat();
    
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

    std::string         getName() const;
    int                 getGrade() const;

    void                increment();
    void                decrement();

    void                signForm(AForm& form);
    void                executeForm(const AForm& form);
    
    // ---------------  Exception  ----------------- //
    class GradeTooLowException: public std::exception {
        public:
            virtual const char* what() const throw() {
                return ("Grade is too high !");
            }
    };
    
    class GradeTooHighException: public std::exception {
        public:
            virtual const char* what() const throw() {
                return ("Grade is too low !");
            }
    };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& i);