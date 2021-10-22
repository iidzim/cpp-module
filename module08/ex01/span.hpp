/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:49:24 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/22 17:40:01 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

class Span{
	private:
		std::vector<int> _v;
		unsigned long _max_size;
	public:
		Span(void);
		~Span(void);
		Span(unsigned int N);
		Span(const Span& s);
		Span& operator=(const Span& s);
		void printVector(void);
		void addNumber(int x);
		void addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
		int shortestSpan(void);
		int longestSpan(void);
};

#endif