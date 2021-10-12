/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:24:40 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 18:47:16 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
	std::cout << "Default Constructor Cat" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat(void){
	delete _brain;
	std::cout << "Default Destructor Cat" << std::endl;
}

Cat::Cat(const Cat& cat){
	std::cout << "Deep Copy Constructor Cat" << std::endl;
	delete[]_brain;
	this->_brain = new Brain();
	*this = cat;
}

Cat& Cat::operator=(Cat const &cat)
{
	if (this != &cat)
		*(this->_brain) = *(cat._brain);
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout << "meow meow " << std::endl;
}

Brain* Cat::getBrain(void)const{
	return (this->_brain);
}

void Cat::setBrain(std::string idea){
	this->_brain->setIdeas(idea);
}