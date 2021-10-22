/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:49:06 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/22 11:56:38 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void){}

Span::~Span(void){}

Span::Span(unsigned int N){
	this->_max_size = N;
}

Span::Span(const Span& s){
	*this = s;
}

Span& Span::operator=(const Span& s){
	if (this != &s){
		this->_max_size = s._max_size;
		this->_v = s._v;
	}
	return (*this);
}

void Span::addNumber(int x){
	if (this->_max_size <= this->_v.size())
		throw "";
	this->_v.push_back(x);
}

void Span::addInfiniteNumber(int n){
	if (this->_max_size <= this->_v.size() + n)
		throw "";
    srand(time(NULL));
	while (--n >= 0){
        int value = rand() % 1000;
		this->_v.push_back(value);
	}
}

//? Attempting to add a new number if there are already N of them stored
//? in the object is an error and should result in an exception

int Span::shortestSpan(){
	if (this->_max_size <= 1)
		throw "";
	sort(this->_v.begin(), this->_v.end());
	std::vector<int>::iterator it;
	// for (it = _v.begin(); it < _v.end() ; it++)//*
	// 	std::cout << *it << " ";//*
	// std::cout << std::endl;//*
	int diff = this->_v[1] - this->_v[0];
	for (it = _v.begin(); it < _v.end() ; it++){
		if (diff > (*it - *(it - 1))){
			std::cout << *(it - 1) << " - " << *it << std::endl;
			diff = *it - *(it - 1);
		}
	}
	std::cout << " span = " << diff << std::endl;
	return (diff);
}

// int Span::longestSpan(){
// 	if (this->_max_size <= 1)
// 		throw "";
// 	//* find longest span
// 	unsigned long i;
// 	int max = this->_v[0];
// 	for (i = 0; i < this->_v.size(); i++){
// 		if (max <= this->_v[i])
// 			max = this->_v[i];
// 	}
// 	int min = this->_v[0];
// 	for (i = 0; i < this->_v.size(); i++){
// 		if (min >= this->_v[i])
// 			min = this->_v[i];
// 	}
// 	std::cout << "longest span = " << max - min << std::endl;
// 	return (max - min);
// }

//? If there are no numbers stored, or only one, there is no span to
//? find, and you will throw an exception.

int Span::longestSpan(){ //!iterator
	if (this->_max_size <= 1)
		throw "";
	sort(this->_v.begin(), this->_v.end());
	int span = *(this->_v.end() - 1) - *(this->_v.begin());
	// std::cout << "longest span = " << span << std::endl;
	return (span);
}