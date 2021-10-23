/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:40:37 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/23 16:06:19 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#define SIZE 10

int main(void){

	std::vector<int> tab;
	std::list<int> l;
	
	std::vector<int>::iterator it;
	std::list<int>::iterator it_list;
    srand(time(NULL));
	for (int i = 0; i < SIZE; i++){
        int value = rand() % 10;
		tab.push_back(value);
		l.push_back(value);
	}

	for (it = tab.begin(); it < tab.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	
	for (it_list = l.begin(); it_list != l.end(); it_list++)
		std::cout << *it_list << " ";
	std::cout << std::endl;

	try{
		int to_find = 0;
		std::cout << "vector -> ";
		easyfind<std::vector<int> >(tab, to_find);
		std::cout << "list -> ";
		easyfind<std::list<int> >(l, to_find);
	}
	catch(...){
		std::cout << "No occurrence found !" << std::endl;
	}
	return (0);
}
