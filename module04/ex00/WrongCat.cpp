/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:16:50 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 21:18:12 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat"){
	std::cout << "Default Constructor WrongCat" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "Default Destructor WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat& Wrongcat){
	std::cout << "Copy Constructor WrongCat" << std::endl;
	*this = Wrongcat;	
}

WrongCat& WrongCat::operator=(WrongCat const &Wrongcat)
{
	this->_type = Wrongcat.getType();
	return (*this);
}

void WrongCat::makeSound(void) const{
	std::cout << "WrongCat >> meow meow " << std::endl;
}