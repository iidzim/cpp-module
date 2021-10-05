/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:08 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/05 18:22:06 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

FragTrap::FragTrap(void){
    std::cout << "DiamondTrap Constructor called" << std::endl;
    this->_HitPoints = ;
    this->_EnergyPoints = ;
    this->_AttackDamage = ;
}

DiamondTrap::~DiamondTrap(void){
    std::cout << "DiamondTrap Destructor called " << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& c){
    std::cout << "DiamondTrap Copy Constructor called " << std::endl;
    *this = c;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &c){
    std::cout << "DiamondTrap Assignation operator called" << std::endl;
    this->_name = c._name;
    this->_HitPoints = c._HitPoints;
    this->_EnergyPoints = c._EnergyPoints;
    this->_AttackDamage = c._AttackDamage;
    return (*this);
}

void DiamondTrap::whoAmI(void){
    std::cout << " " << std::endl;
}
