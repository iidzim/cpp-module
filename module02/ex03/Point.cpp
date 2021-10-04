/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:32:50 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/04 19:06:36 by iidzim           ###   ########.fr       */
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

Point::Point(const float x, const float y){
    this->setX(x);
    this->setY(y);
}

Point& Point::operator=(Point const &p){
    this->setX(p.getX().toFloat());
    this->setY(p.getY().toFloat());
    return (*this);
}

Fixed Point::getX(void) const{
    return (this->_x);
}

Fixed Point::getY(void) const{
    return (this->_y);
}

void Point::setX(const float x){
    this->_x = Fixed(x);//?
}

void Point::setY(const float y){
    this->_y = Fixed(y);//?
}
