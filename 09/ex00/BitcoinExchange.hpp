/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:49:11 by jchu              #+#    #+#             */
/*   Updated: 2023/05/02 15:19:03 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <queue>
#include <string>

class Data{
private:
	std::string _date;
	float	_value;

public:
	Data();
	Data(std::string s, int v);
	Data &operator=(const Data& other);

	void	wrongdateformat(std::string input);

	float       getValue() const;
	std::string	getDate() const;

	void	    setDate(std::string d);
	void	    setValue(float i);
};