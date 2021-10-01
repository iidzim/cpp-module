/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:59:14 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/01 15:14:22 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main (void){

    Karen k;
    k.complain("DEBUG");
    k.complain("INFO");
    k.complain("WARNING");
    k.complain("ERROR");
    return (0);
}