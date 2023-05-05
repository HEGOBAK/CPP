/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:46:21 by jchu              #+#    #+#             */
/*   Updated: 2023/05/05 19:13:58 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PmergeMe.hpp"

void    print_sequence(std::string type, std::vector<int> v) {
    std::cout << type << ": ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(int ac, char **av) 
{
    if (ac < 2) {
        std::cerr << "Error: Missing argument for sequence of integers.\n";
        return (-1); 
    }
    
    std::vector<int>    vector;
    std::list<int>      list;
    
    for (int i = 1; i < ac; i++) {
        try {
            int num = std::stoi(av[i]);
            if (num <= 0) {
                std::cerr << "Error: Invalid argument (positive integers only).\n";
                return 1;
            }
            vector.push_back(num);
            list.push_back(num);
        } catch (const std::exception& e) {
            std::cerr << "Error: Invalid argument (" << e.what() << ").\n";
            return 1;
        }
    }

    if (vector.size() > 3000 || list.size() > 3000) {
        std::cerr << "Error: The integer sequence is too large. Maximum allowed size is 3000." << std::endl;
        return 1;
    }

    print_sequence("Before", vector);
    
    std::chrono::high_resolution_clock::time_point start;
	std::chrono::high_resolution_clock::time_point end;
	std::chrono::nanoseconds durationV;
	std::chrono::nanoseconds durationL;

    start = std::chrono::high_resolution_clock::now();
	mergeInsortSortVector(vector);
	end = std::chrono::high_resolution_clock::now();
	durationV = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

	start = std::chrono::high_resolution_clock::now();
	mergeInsortSortList(list);
	end = std::chrono::high_resolution_clock::now();
	durationL = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    print_sequence("After", vector);
    std::cout << "Time to process a range of " << vector.size() << " elements with std::[vector] : " << durationV.count() << " us" << std::endl;
	std::cout << "Time to process a range of " << list.size() << " elements with std::[list] : " << durationL.count() << " us" << std::endl;
}
