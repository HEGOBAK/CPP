/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:15:24 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 08:33:36 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string> 

class Contact {
	private:
		std::string	fn;
		std::string	ln;
		std::string	nn;
		std::string	secret;
		std::string	num;
	public:
		void				setFn(std::string fn);
		void				setLn(std::string ln);
		void				setNn(std::string nn);
		void				setSecret(std::string secret);
		void				setNum(std::string num);
		const std::string	getFn(void);
		const std::string	getLn(void);
		const std::string	getNn(void);
		const std::string	getSecret(void);
		const std::string	getNum(void);
};