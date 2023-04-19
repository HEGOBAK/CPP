/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:23:14 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 08:34:12 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

const std::string	Contact::getFn()
{
	return (this->fn);
}

const std::string	Contact::getLn()
{
	return (this->ln);
}

const std::string	Contact::getNn()
{
	return (this->nn);
}

const std::string	Contact::getSecret()
{
	return (this->secret);
}

const std::string	Contact::getNum()
{
	return (this->num);
}

void		Contact::setFn(std::string fn)
{
	this->fn = fn;
}

void		Contact::setLn(std::string ln)
{
	this->ln = ln;
}

void		Contact::setNn(std::string nn)
{
	this->nn = nn;
}

void		Contact::setSecret(std::string secret)
{
	this->secret = secret;
}

void		Contact::setNum(std::string num)
{
	this->num = num;
}
