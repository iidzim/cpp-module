/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:53:19 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/29 17:37:50 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon(void){
    return ;
}

void Weapon::setType(std::string type){
    this->_type = type;
}

const std::string& Weapon::getType(void){
    const std::string& type_ref = this ->_type;
    return (type_ref);
    // return (&(this._type));//???
}