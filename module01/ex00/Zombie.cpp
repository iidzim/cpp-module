/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:20:30 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/28 11:08:42 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "Constructor called " << std::endl;
    return;
}

Zombie::~Zombie(){
    std::cout << "Detructor called " << _name << std::endl;
    return;
}

void Zombie::set_name(std::string name){
    this->_name = name;
}

std::string Zombie::get_name(void){
    return (this->_name);
}

void Zombie::announce(void){
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}