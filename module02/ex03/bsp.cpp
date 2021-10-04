/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:30:35 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/04 18:29:57 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point){
    Fixed Area = area(a, b, c);
    Fixed Area1 = area(a, b, point);
    Fixed Area2 = area(a, c, point);
    Fixed Area3 = area(b, c, point);
    return ((Area <= (Area1 + Area2 + Area3)));
}
