/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:25:14 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 13:06:46 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"){
	std::cout << "Default Constructor Dog" << std::endl;
}

Dog::~Dog(void){
	std::cout << "Default Destructor Dog" << std::endl;
}

void Dog::deepCopy(const Dog& dog){
	delete[]_brain;
	if (dog._brain){
		this->_brain = new Brain();
		this->_brain = dog._brain;
	}
	else
		this->_brain = NULL;
}

Dog::Dog(const Dog& dog){
	std::cout << "Deep Copy Constructor Dog" << std::endl;
	deepCopy(dog);
}

Dog& Dog::operator=(Dog const &dog){
	if (this != &dog)
		deepCopy(dog);
	return (*this);
}

void Dog::makeSound(void) const{
	std::cout << "how how how" << std::endl;
}
