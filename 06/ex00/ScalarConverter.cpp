/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 03:04:43 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 04:09:45 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverter.hpp"

template <typename T>
T ScalarConverter<T>::convert(const std::string& str) {
    T result;
    
    if (std::is_same<T, char>::value) {
        try {
            result = std::stoi(str);
        } catch (const std::exception&) {
            return -1;
        }
        return result;
    }
    if (std::is_same<T, int>::value) {
        try {
            result = std::stoi(str);
        } catch (const std::exception&) {
            return -1;
        }
        return result;
    }
    if (std::is_same<T, float>::value) {
        try {
            result = std::stof(str);
        } catch (const std::exception&) {
            return -1;
        }
        return result;
    }
    if (std::is_same<T, double>::value) {
        try {
            result = std::stod(str);
        } catch (const std::exception&) {
            return -1;
        }
        return result;
    }
    return -1;
}

template class ScalarConverter<int>;
template class ScalarConverter<float>;
template class ScalarConverter<double>;
template class ScalarConverter<char>;
