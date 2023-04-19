/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:10:05 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 17:29:17 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>

class Replace {
	private:
		std::string	in_file;
		std::string	out_file;
	public:
		Replace(std::string fileName);
		~Replace(void);

		void	replace(std::string s1, std::string s2);
};