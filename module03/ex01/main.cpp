/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:45:12 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/05 15:55:55 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){

    ScavTrap player1;
    ScavTrap player2;
    ScavTrap player3;
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
