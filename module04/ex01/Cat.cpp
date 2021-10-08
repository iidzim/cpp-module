/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:24:40 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 21:27:48 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
	std::cout << "Default Constructor Cat" << std::endl;
}

Cat::~Cat(void){
	std::cout << "Default Destructor Cat" << std::endl;
}

Cat::Cat(const Cat& cat){
	std::cout << "Copy Constructor Cat" << std::endl;
	*this = cat;	
}

Cat& Cat::operator=(Cat const &cat)
{
	this->_type = cat.getType();
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout << "meow meow " << std::endl;
}
