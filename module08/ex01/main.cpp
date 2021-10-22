/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:48:45 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/22 11:58:45 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void){
    
    try{
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(...){
        std::cout << "no space left" << std::endl;
    }
    try{
        Span span2 = Span(10000);
        span2.addInfiniteNumber(1000);

        std::cout << span2.shortestSpan() << std::endl;
        std::cout << span2.longestSpan() << std::endl;
    }
    catch(...){
        std::cout << "no space left" << std::endl;
    }
    return (0);
}