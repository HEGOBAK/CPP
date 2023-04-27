/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:55:59 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 22:37:18 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
private:
    const std::string   _name;
    bool                _isSigned;
    const int           _signIt;
    const int           _execIt;

    Form();
    
public:
    Form(std::string name, int signIt, int execIt);
    ~Form();
    Form(const Form& other);
    Form& operator=(const Form& other);

    std::string getName() const;
    bool        getIsSigned() const;
    const int   getSignIt() const;
    const int   getExecIt() const;

    void        beSigned(const Bureaucrat& bureaucrat);
    
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

std::ostream& operator<<(std::ostream& o, const Form& i);