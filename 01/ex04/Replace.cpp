/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:10:41 by jchu              #+#    #+#             */
/*   Updated: 2023/04/18 17:27:14 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Replace.hpp"

Replace::Replace(std::string fileName): in_file(fileName)
{
	this->out_file = fileName + ".replace";
}

Replace::~Replace(void) {}

void	Replace::replace( std::string toFind, std::string replace) {
    std::ifstream   ifs(this->in_file);
    if (ifs.is_open()) {
        std::string content;
        if (std::getline(ifs, content, '\0')) {
            std::ofstream   ofs(this->out_file);
            size_t          pos = content.find(toFind);
            while ( pos != std::string::npos ) {
                content.erase(pos, toFind.length());
                content.insert(pos, replace);
                pos = content.find(toFind);
            }
            ofs << content;
            ofs.close();
        }
        else {
            std::cerr << "Empty file found." << std::endl;
        }
        ifs.close();
    } else {
        std::cerr << "Unable to open the file." << std::endl;
        exit(-1);
    }
}