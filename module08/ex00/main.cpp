/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:40:37 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/21 12:55:12 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#define SIZE 10

int main(void){

	std::vector<int> tab;
	unsigned long i;
    srand(time(NULL));
	for (i = 0; i < SIZE; i++){
        int value = rand() % 10;
		tab.push_back(value);
	}

	for (i = 0; i < tab.size(); i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;

	try{
		int to_find = 0;
		easyfind<int>(tab, to_find);
	}
	catch(...){
		std::cout << "No occurrence found !" << std::endl;
	}
	return (0);
}
