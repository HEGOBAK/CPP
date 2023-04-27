/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:45:53 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 23:45:10 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
private:
    std::string _target;
    
    ShrubberyCreationForm();
    
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();

    void    execute(const Bureaucrat& executor) const;
};