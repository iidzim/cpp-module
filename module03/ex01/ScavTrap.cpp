/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:25:18 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/05 11:58:41 by iidzim           ###   ########.fr       */
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
    return (*this);
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
} 