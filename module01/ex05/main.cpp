/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:59:14 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/30 18:34:20 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main (void){

    Karen k;
    k.complain("ERROR");
    k.complain("WARNING");
    k.complain("INFO");
    k.complain("DEBUG");
    return (0);
}