/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:29:20 by jchu              #+#    #+#             */
/*   Updated: 2023/04/21 14:33:09 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
    
public:
    Brain(void);
    ~Brain(void);
    Brain(const Brain& otherBrain);
    Brain& operator=(const Brain& otherBrain);
};