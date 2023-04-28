/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:09:50 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 20:18:24 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <class T>
class	Array{
public:
	Array() : _size(0) {
		arr = new T[0];
	}

	Array(unsigned int size) : _size(size) {
		arr = new T[size];
	}

	Array(Array const &a) {
		this->arr = NULL;
		*this = a;
	}

	Array &operator=(Array const &a) {
		if (arr != NULL)
			delete[] arr;
		if (a._size != 0)
		{
			_size = a._size;
			arr = new T[_size];
			for (size_t i = 0; i < _size; i++)
				arr[i] = a.arr[i];
		}
		return (*this);
	}

	virtual ~Array() {
		if (this->arr != NULL)
			delete[] arr;
	}

	T &operator[](unsigned int i) { 
        if (i < _size) 
            return arr[i]; 
        else 
            throw Array<T>::InvalidIndexException(); 
    }
    
	class	InvalidIndexException : public std::exception {
	public:
		virtual const char	*what() const throw() {
            return ("Error: Invalid index !");
        };
	};
    
private:
	T*	arr;
	unsigned int _size;
};