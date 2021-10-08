/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:32:50 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 17:53:28 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0) , _y(0){
}

Point::~Point(void){
}

Point::Point(const Point& p){
    *this = p;
}

Point::Point(const float x, const float y): _x(x), _y(y){
}

Point& Point::operator=(Point const &p){
    (void)p;
    return (*this);
}

Fixed Point::getX(void) const{
    return (this->_x);
}

Fixed Point::getY(void) const{
    return (this->_y);
}

std::ostream& operator<<(std::ostream& os, Point const &p) {
    os << "(" << p.getX() << ", " << p.getY() << ")";
    return os;
}
