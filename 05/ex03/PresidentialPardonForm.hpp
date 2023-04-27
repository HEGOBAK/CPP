/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:19:28 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 23:25:34 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
    std::string _target;
    
    PresidentialPardonForm();
    
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    ~PresidentialPardonForm();

    void    execute(const Bureaucrat& executor) const;
};