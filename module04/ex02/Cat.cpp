/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:24:40 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 12:35:54 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
	std::cout << "Default Constructor Cat" << std::endl;
}

Cat::~Cat(void){
	std::cout << "Default Destructor Cat" << std::endl;
}

void Cat::deepCopy(const Cat& cat){
	delete[]_brain;
	if (cat._brain){
		this->_brain = new Brain();
		this->_brain = cat._brain;
	}
	else
		this->_brain = NULL;
}

Cat::Cat(const Cat& cat){
	std::cout << "Deep Copy Constructor Cat" << std::endl;
	deepCopy(cat);
}

Cat& Cat::operator=(Cat const &cat)
{
	if (this != &cat)
		deepCopy(cat);
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout << "meow meow " << std::endl;
}
