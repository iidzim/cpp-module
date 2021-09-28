/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:13:16 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/28 13:02:53 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name){
    
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i].set_name(name);
    return zombies;
}