/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:49:06 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/21 17:56:23 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void){
}

Span::~Span(void){
}

Span::Span(unsigned int N){
	this->_max_size = N;
}

void Span::addNumber(int x){
	if (this->_max_size <= this->_v.size())
		throw "";
	this->_v.push_back(x);
}

//? Attempting to add a new number if there are already N of them stored
//? in the object is an error and should result in an exception

int Span::shortestSpan(){
	if (this->_size <= 1)
		throw "";
	//* find shortest span
	sort(this->_v.begin(), this->_v.end());
	std::cout << "sorted\n";
	unsigned long i;
	for (i = 0; i < this->_v.size() ; i++)//*
		std::cout << this->_v[i] << " ";//*
	std::cout << std::endl;//*
	int diff = this->_v[1] - this->_v[0];
	for (i = 1; i < this->_v.size(); i++){
		if (diff > (this->_v[i + 1] - this->_v[i]))
			diff = this->_v[i + 1] - this->_v[i];
	}
	std::cout << "largest span = " << diff << std::endl;
	return (diff);
}

int Span::longestSpan(){
	if (this->_size <= 1)
		throw "";
	//* find longest span
	unsigned long i;
	int max = this->_v[0];
	for (i = 0; i < this->_v.size(); i++){
		if (max <= this->_v[i])
			max = this->_v[i];
	}
	int min = this->_v[0];
	for (i = 0; i < this->_v.size(); i++){
		if (min >= this->_v[i])
			min = this->_v[i];
	}
	std::cout << "longest span = " << max - min << std::endl;
	return (max - min);
}

//? If there are no numbers stored, or only one, there is no span to
//? find, and you will throw an exception.

int Span::longestSpan(){ //!iterator
	if (this->_size <= 1)
		throw "";
	//* find longest span
	std::vector<int>::iterator ptr;
	int max = this->_v[0];
	for (ptr = this->_v.begin() ; ptr < this->_v.end(); ptr++){
		if (max <= *ptr)
			max = *ptr;
	}
	int min = this->_v[0];
	for (ptr = this->_v.begin() ; ptr < this->_v.end(); ptr++){
		if (min >= *ptr)
			min = *ptr;
	}
	std::cout << "longest span = " << max - min << std::endl;
	return (max - min);
}