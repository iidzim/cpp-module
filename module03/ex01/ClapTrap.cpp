/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:24:36 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 18:57:41 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _HitPoints(100), _EnergyPoints(50), _AttackDamage(20){
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    this->_name = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ClapTrap Parameterized Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap Destructor called " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c){
    std::cout << "ClapTrap Copy Constructor called " << std::endl;
    *this = c;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &c){
	std::cout << "ClapTrap Assignation operator called" << std::endl;
    this->_name = c._name;
    this->_HitPoints = c._HitPoints;
    this->_EnergyPoints = c._EnergyPoints;
    this->_AttackDamage = c._AttackDamage;
    return (*this);
}

void ClapTrap::setName(std::string name){
    this->_name = name;
}

void ClapTrap::attack(std::string const & target){
    std::cout << "ClapTrap " << _name << " attack " << target << " causing " <<  _AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    this->_HitPoints -= amount;
    this->_EnergyPoints -= amount / 2;
    std::cout << "ClapTrap " << _name << " take damage " << _HitPoints << " hit points and " << _EnergyPoints << " Energy points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    this->_HitPoints += amount;
    this->_EnergyPoints += amount / 2;
    std::cout << "ClapTrap " << _name << " has been repaired " << _HitPoints << " hit points and " << _EnergyPoints << " Energy points" << std::endl;
}
