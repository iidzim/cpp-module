/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:30:35 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 17:56:39 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(const Point &p1, const Point &p2, const Point &p3){
    Fixed Area;
    Area = Fixed(abs((((p1.getX() * (p2.getY() - p3.getY())) + (p2.getX() * (p3.getY() - p1.getY())) + (p3.getX() * (p1.getY() - p2.getY()))) / 2).toInt()));
    return (Area);
}

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point){
    Fixed Area = area(a, b, c);
    Fixed Area1 = area(a, b, point);
    Fixed Area2 = area(a, c, point);
    Fixed Area3 = area(b, c, point);
    std::cout << a << " " << b << " "  << c << " "  << point << std::endl;
    std::cout << Area << " " << Area1 << " "  << Area2 << " "  << Area3 << std::endl;
    return ((Area == (Area1 + Area2 + Area3)));
}
