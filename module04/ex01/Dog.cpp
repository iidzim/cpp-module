/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:25:14 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 18:38:03 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"){
	std::cout << "Default Constructor Dog" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog(void){
	delete _brain;
	std::cout << "Default Destructor Dog" << std::endl;
}

Dog::Dog(const Dog& dog){
	delete[]_brain;
	this->_brain = new Brain();
	*this = dog;
	std::cout << "Deep Copy Constructor Dog" << std::endl;
}

Dog& Dog::operator=(Dog const &dog){
	if (this != &dog)
		*(this->_brain) = *(dog._brain);
	return (*this);
}

void Dog::makeSound(void) const{
	std::cout << "how how how" << std::endl;
}

Brain* Dog::getBrain(void)const{
	return (this->_brain);
}

void Dog::setBrain(std::string idea){
	this->_brain->setIdeas(idea);
}
