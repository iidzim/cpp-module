/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:49:24 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/22 11:50:53 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

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
		void addNumber(int x);
		void addInfiniteNumber(int n);
		int shortestSpan(void);
		int longestSpan(void);
};

#endif