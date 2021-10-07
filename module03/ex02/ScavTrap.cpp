/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:15:18 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/06 17:54:31 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "ScavTrap Parameterized Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap Destructor called " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& c) : ClapTrap(c._name){
    std::cout << "ScavTrap Copy Constructor called " << std::endl;
    *this = c;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &c){
	std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->_name = c._name;
    this->_HitPoints = c._HitPoints;
    this->_EnergyPoints = c._EnergyPoints;
    this->_AttackDamage = c._AttackDamage;
    return (*this);
}

void ScavTrap::attack(std::string const & target){
    std::cout << "ScavTrap " << _name << " attack " << target << " causing " <<  _AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void){
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
