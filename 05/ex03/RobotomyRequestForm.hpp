/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:19:25 by jchu              #+#    #+#             */
/*   Updated: 2023/04/26 23:37:12 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
    std::string _target;
    
    RobotomyRequestForm();
    
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();

    void    execute(const Bureaucrat& executor) const;
};