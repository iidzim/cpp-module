/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:49:24 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/21 17:09:53 by iidzim           ###   ########.fr       */
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
		void addNumber(int x);
		int shortestSpan();
		int longestSpan();

}

#endif