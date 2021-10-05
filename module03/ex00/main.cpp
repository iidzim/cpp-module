/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:18:13 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/05 11:17:29 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void){

    ClapTrap player1;
    ClapTrap player2;
    ClapTrap player3;
    player1.setName("player1");
    player2.setName("player2");
    player3 = player1;
    player3.setName("player3");
    player1.attack("player2");
    player2.attack("player3");
    player2.takeDamage(4);
    player3.takeDamage(4);
    player1.beRepaired(2);
    return (0);
}