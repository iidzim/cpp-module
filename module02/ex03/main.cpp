/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:31:28 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/04 17:39:47 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void){

    Point A(2, 3);
    Point B(4, 1);
    Point C(5, 5);
    Point X(4, 3); //*
    Point Y(2, 4); //!

    if (bsp(A, B, C, X))
    // if (bsp(A, B, C, Y))
        std::cout << "inside the triangle" << std::endl;
    else
        std::cout << "outside the triangle" << std::endl;
    return (0);
}