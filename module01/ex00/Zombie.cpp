/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:20:30 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/26 14:31:32 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    std::cout << "constructor" << std::endl;
}

Zombie::~Zombie(){
    std::cout << "detructor" << std::endl;
}

void Zombie::set_name(std::string name){
    this->_name = name;
}

std::string Zombie::get_name(void){
    return (this->_name);
}

void Zombie::announce(void){
    
}