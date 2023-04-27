/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:57:49 by jchu              #+#    #+#             */
/*   Updated: 2023/04/27 15:18:37 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"

class Intern
{
private:

public:
    Intern();
    Intern(const Intern& other);
    Intern& operator=(const Intern& other);
    ~Intern();

    AForm*   makeForm(std::string name, std::string target);
};