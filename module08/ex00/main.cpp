/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:40:37 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/21 23:45:06 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#define SIZE 10

int main(void){

	std::vector<int> tab;
	std::vector<int>::iterator it;
    srand(time(NULL));
	for (int i = 0; i < SIZE; i++){
        int value = rand() % 10;
		tab.push_back(value);
	}

	for (it = tab.begin(); it < tab.end(); it++)
		std::cout << *it << " ";
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
