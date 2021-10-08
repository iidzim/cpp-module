/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:20:57 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 18:08:30 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//? Default Constructor
Fixed::Fixed(void) : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

//? Default Destructor
Fixed::~Fixed(void){
	std::cout << "Default destructor called" << std::endl;
}

//? Copy Constructor
Fixed::Fixed(const Fixed& f)/*: _value(f._value)*/{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

//? Copy Assignment Operator
Fixed& Fixed::operator =(Fixed const &f){
	std::cout << "Assignation operator called" << std::endl;
	this->_value = f.getRawBits();
	return (*this);
}

//? Getter
int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

//? Setter
void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
