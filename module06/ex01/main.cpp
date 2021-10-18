/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:11:10 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/18 11:39:47 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>

typedef struct s_Data{
	std::string s;
	int i;
	float f;
}               Data;

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main (void){

	uintptr_t n;
	Data d, *data2;
	d.s = "test";
	d.i = 1337;
	d.f = 42.0002;

	std::cout << "----Before----" << std::endl;
	std::cout << "s = " << d.s << std::endl;
	std::cout << "i = " << d.i << std::endl;
	std::cout << "f = " << d.f << std::endl;

	n = serialize(&d);
	data2 = deserialize(n);

	std::cout << "----After----" << std::endl;
	std::cout << "s = " << data2->s << std::endl;
	std::cout << "i = " << data2->i << std::endl;
	std::cout << "f = " << data2->f << std::endl; 
	return (0);
}
