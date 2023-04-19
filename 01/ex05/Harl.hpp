/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:30:57 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 17:49:02 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Harl {
	private:
    	void    debug( void );
    	void    info( void );
    	void    warning( void );
    	void    error( void );
	public:
		Harl(void);
		~Harl(void);

		void	complain( std::string level );
};

typedef void (Harl::*t_func) ( void );