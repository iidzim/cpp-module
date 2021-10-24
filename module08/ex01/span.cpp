/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:49:06 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/24 16:08:55 by iidzim           ###   ########.fr       */
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

void Span::printVector(void){
    std::vector<int>::iterator it;
	for (it = this->_v.begin(); it < this->_v.end(); it++)
        std::cout << *it << " ";
	std::cout << std::endl;
}

void Span::addNumber(int x){
	if (this->_max_size <= this->_v.size())
		throw "";
	this->_v.push_back(x);
}

void Span::addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2){
	if (this->_max_size < this->_v.size() + (it2 - it1))
		throw "";
	this->_v.insert(this->_v.end(), it1, it2);
}

int Span::shortestSpan(){
	if (this->_max_size <= 1)
		throw "";
	unsigned long i;
	sort(this->_v.begin(), this->_v.end());
	int diff = this->_v[1] - this->_v[0];
	for (i = 1; i < this->_v.size(); i++){
		if (diff > (this->_v[i] - this->_v[i - 1]))
			diff = this->_v[i] - this->_v[i - 1];
	}
	return (diff);
}

int Span::longestSpan(){
	if (this->_max_size <= 1)
		throw "";
	sort(this->_v.begin(), this->_v.end());
	int span = *(this->_v.end() - 1) - *(this->_v.begin());
	return (span);
}
