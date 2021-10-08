/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:32:56 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 17:54:58 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
  private:
    const Fixed _x;
    const Fixed _y;

  public:
    Point(void);
    ~Point(void);
    Point(const Point& p);
    Point(const float x, const float y);
    Point& operator=(Point const &p);
    Fixed getX(void) const;
    Fixed getY(void) const;
};

std::ostream& operator<<(std::ostream& os, Point const &f);
Fixed area(const Point &p1, const Point &p2, const Point &p3);
bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);

#endif
