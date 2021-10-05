/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:45:12 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/05 18:44:58 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){

    ScavTrap player1("player1");
    ScavTrap player2("player2");
    player1.attack("player2");
    player2.attack("player3");
    player2.takeDamage(4);
    player1.beRepaired(2);
    return (0);
}
