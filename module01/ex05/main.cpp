/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:59:14 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/30 17:36:15 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int main (void){

    Karen k;
    typedef void (Karen::*DPTR)(void);
    typedef void (Karen::*IPTR)(void);
    typedef void (Karen::*WPTR)(void);
    typedef void (Karen::*EPTR)(void);
    DPTR dPtr = &Karen::complain;
    IPTR iPtr = &Karen::complain;
    WPTR wPtr = &Karen::complain;
    EPTR ePtr = &Karen::complain;

    

    return (0);
}