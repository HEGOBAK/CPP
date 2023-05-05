/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:49:09 by jchu              #+#    #+#             */
/*   Updated: 2023/05/02 15:26:16 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BitcoinExchange.hpp"

Data    getData(std::string line) {
    Data    ret;
    
    if (line[10] != ',')
	{
		ret.wrongdateformat(line);
		return ret;
	}
	int month = stoi(std::string(&line[5], &line[7]));
	int day = stoi(std::string(&line[8], &line[10]));
	if (month < 0 || month > 12 || day < 0 || day > 31)
	{
		ret.wrongdateformat(line);
		return ret;
	}
	std::string date = std::string(line.begin(), line.begin() + line.find(','));
	if (ret.getDate() == "")
		ret.setDate(date);
	float	value = stof(std::string(line.begin() + line.find(',') + 1, line.end()));
	if (value < 0 || value > 1000)
	{
		if (value > 1000)	ret.setDate("Error: too large a number.");
		else	ret.setDate("Error: not a positive number.");
		ret.setValue(-1);
	}
	if (ret.getValue() != -1)
		ret.setValue(value);
	return ret;
}

std::queue<Data>    getQueue(std::string fileName) {
    std::queue<Data>    ret;
    std::ifstream       file(fileName);
    std::string         line;

    if (file.is_open()) {
        std::getline(file, line); // Discarding the first line of the file which is (data, exchange rate)
        while (std::getline(file, line)) {
            ret.push(getData(line));
        }
        file.close();
    }
    else {
     	std::cerr << "Unable to open file" << std::endl;   
    }
    return (ret);
}

int main(int ac, char** av)
{
    if (ac != 2) {
		std::cerr << "Wrong Use! ./program <input file>" << std::endl;
        return (-1);
    }

    std::queue<Data>    storage = getQueue(av[1]);
    Data                temp;
    while (!storage.empty()) {
        temp = storage.front();
        if (temp.getValue() == -1) {
            std::cout << temp.getDate() << std::endl;
        } else {
            std::cout << temp.getDate() << " => " << temp.getValue() << " = " << temp.getValue() * 18 << std::endl;
        }
        storage.pop();
    }
}