/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:20:04 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 17:46:13 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("undefined"){
    std::cout << "Default Consrtuctor WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal(void){}

WrongAnimal::WrongAnimal(const WrongAnimal& Wronganimal){
    *this = Wronganimal;
}

WrongAnimal::WrongAnimal(std::string type): _type(type){
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &Wronganimal){
    this->_type = Wronganimal.getType();
    return (*this);
}

std::string WrongAnimal::getType(void) const{
    return (this->_type);
}

void WrongAnimal::set_type(std::string type){
    this->_type = type;
}

void WrongAnimal::makeSound(void) const{
    std::cout << "Animal sound" << std::endl;
}
