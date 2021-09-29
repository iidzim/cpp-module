/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:49:44 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/29 16:41:16 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon){
    this->_name = name;
    this->_weapon = &weapon;
}

void HumanA::attack(void){
    std::cout << _name << " attacks with his " << _weapon.getType();
}