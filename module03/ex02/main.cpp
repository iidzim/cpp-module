/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:40:20 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 19:07:32 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main (void){

    FragTrap player1("player1");
    player1.attack("player2");
    player1.takeDamage(4);
    player1.beRepaired(2);
    player1.highFivesGuys();
    return (0);
}
