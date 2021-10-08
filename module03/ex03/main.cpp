/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:51:52 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 19:11:33 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void){

    DiamondTrap d("WARRIOR");

    d.attack("TARGET");
    d.guardGate();
    d.highFivesGuys();
    d.whoAmI();
    return (0);
}
