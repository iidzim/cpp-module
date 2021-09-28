/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:10:21 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/28 13:01:05 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void){
    
    Zombie *zombies;
    int N = 5;
    zombies = ZombieHorde(N, "test");
    for (int i = 0; i < N; i++)
        zombies[i].announce();
    delete[]zombies;
    return (0);
}