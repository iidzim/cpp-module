/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:50:34 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 17:14:01 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _HitPoints(100), _EnergyPoints(100), _AttackDamage(30){
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->_name = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap Parameterized Constructor called" << std::endl;
}

FragTrap::~FragTrap(void){
    std::cout << "FragTrap Destructor called " << std::endl;
}

FragTrap::FragTrap(const FragTrap& c) : ClapTrap(c._name){
    std::cout << "FragTrap Copy Constructor called " << std::endl;
    *this = c;
}

FragTrap& FragTrap::operator=(FragTrap const &c){
	std::cout << "FragTrap Assignation operator called" << std::endl;
    this->_name = c._name;
    this->_HitPoints = c._HitPoints;
    this->_EnergyPoints = c._EnergyPoints;
    this->_AttackDamage = c._AttackDamage;
    return (*this);
}

void FragTrap::highFivesGuys(void){
    std::cout << " highFivesGuys ! " << std::endl;
}
