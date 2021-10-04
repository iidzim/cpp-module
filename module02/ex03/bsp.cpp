/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:30:35 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/04 18:38:29 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(const Point p1, const Point p2, const Point p3){
    Fixed Area;
    Area = ((p1.getX() * (p2.getY() - p3.getY())) + (p2.getX() * (p3.getY() - p1.getY())) + (p3.getX() * (p1.getY() - p2.getY()))) / 2;
    return (Area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    Fixed Area = area(a, b, c);
    Fixed Area1 = area(a, b, point);
    Fixed Area2 = area(a, c, point);
    Fixed Area3 = area(b, c, point);
    return ((Area <= (Area1 + Area2 + Area3)));
}
