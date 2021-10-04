/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:32:50 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/04 18:28:25 by iidzim           ###   ########.fr       */
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

Point::Point(const float x, const float y){//: _x(x), _y(y){
    this->setX(x);
    this->setY(y);
}

Point& Point::operator=(Point const &p){
    this->_x = p.getX();
    this->_y = p.getY();
    return (*this);
}

Fixed Point::getX(void) const{
    return (this->_x);
}

Fixed Point::getY(void) const{
    return (this->_y);
}

void Point::setX(const float x){
    this->_x = Fixed(x);    
}

void Point::setY(const float y){
    this->_y = Fixed(y);    
}

Fixed Point::area(const Point p1, const Point p2, const Point p3){
    Fixed Area;
    Area = ((p1.getX() * (p2.getY() - p3.getY())) + (p2.getX() * (p3.getY() - p1.getY())) + (p3.getX() * (p1.getY() - p2.getY()))) / 2;
    return (Area);
}
