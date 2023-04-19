/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:15:10 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 09:44:22 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Contact.hpp"
#include <iostream>

class PhoneBook {
	private:
		Contact contacts[8];
		int n_contacts;
		int i;
	public:
		PhoneBook(): n_contacts(0), i(0) {}
		int		get_n_contacts(void);
		void	display_phonebook(void);
		void	display_contact(int index);
		void	add_contact(std::string input[5]);
};