/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:08 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 18:38:37 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){
    std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name){
    std::cout << "DiamondTrap Parameterized Constructor called" << std::endl;
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    this->_HitPoints = FragTrap::_HitPoints;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_AttackDamage = FragTrap::_AttackDamage;
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

void DiamondTrap::attack(std::string const & target){
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void){
    std::cout << this->_name << " | " << ClapTrap::_name << std::endl;
}
