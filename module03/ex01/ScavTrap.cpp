/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:25:18 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/05 15:53:36 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): _HitPoints(100), _EnergyPoints(50), _AttackDamage(20){
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap Destructor called " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& c){
    std::cout << "ScavTrap Copy Constructor called " << std::endl;
    *this = c;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &c){
	std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->_name = c.name;
    this->_HitPoint = c.HitPoint;
    this->_EnergyPoint = c._EnergyPoint;
    this->_AttackDamage = c.AttackDamage;
    return (*this);
}

void ScavTrap::attack(std::string const & target){
    std::cout << "ScavTrap " << _name << " attack " << target << " causing " <<  _AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void){
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
