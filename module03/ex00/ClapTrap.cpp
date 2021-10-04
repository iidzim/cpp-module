/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:18:51 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/04 20:34:45 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0){
    std::cout << "Constructor called " << std:endl;
}

ClapTrap::~ClapTrap(void){
    std::cout << "Destructor called " << std:endl;
}

ClapTrap::ClapTrap(const ClapTrap& c){
    std::cout << "Copy Constructor called " << std:endl;
    *this = c;
}

ClapTrap& ClapTrap::operator=(ClapTrap& const c){
    this->_name = c._name;
    this->_Hitpoints = c._Hitpoints;
    this->_EnergyPoints = c._EnergyPoints;
    this->_AttackDamage = c._AttackDamage;
    return (*this);
}

void ClapTrap::attack(std::string const & target){
    std::cout << "ClapTrap " << _name << "attack " << target->_name << "causing " <<  points of damage " << std:endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "Take damage " << std:endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "be repaired" << std:endl;        
}
