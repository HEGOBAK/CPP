/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 03:04:38 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 04:11:33 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <type_traits>
#include <iostream>
#include <cmath>

template<typename T>
class ScalarConverter
{
private:
public:
	static T	convert(const std::string&);
};