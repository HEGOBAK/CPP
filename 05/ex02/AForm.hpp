/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:55:59 by jchu              #+#    #+#             */
/*   Updated: 2023/04/27 15:22:58 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./Bureaucrat.hpp"

class Bureaucrat;

class AForm 
{
private:
    const std::string   _name;
    bool                _isSigned;
    const int           _signIt;
    const int           _execIt;

    AForm();
    
public:
    AForm(std::string name, int signIt, int execIt);
    virtual ~AForm();
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);

    std::string     getName() const;
    bool            getIsSigned() const;
    const int       getSignIt() const;
    const int       getExecIt() const;

    void            beSigned(const Bureaucrat& bureaucrat);
    virtual void    execute(const Bureaucrat& executor) const = 0;
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

    class NotSignedException: public std::exception {
        public:
            virtual const char* what() const throw() {
                return ("Form not signed !");
            }
    };
};

std::ostream& operator<<(std::ostream& o, const AForm& i);