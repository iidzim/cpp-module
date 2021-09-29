/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:49:48 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/29 17:38:17 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){// : _name(name)

    this->_name = name;
    // this->_weapon = 
}

HumanB::~HumanB(void){
    return ;
}

void HumanB::attack(void){
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
    this->_weapon = &weapon;
}