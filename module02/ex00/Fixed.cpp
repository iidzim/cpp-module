/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:20:57 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/02 16:19:30 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//? Default Constructor
Fixed::Fixed(void) : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

//? Default Destructor
Fixed::~Fixed(void){
	std::cout << "Default desstructor called" << std::endl;
}

//? Copy Constructor
Fixed::Fixed(const Fixed& f): _value(f.value), _fract_bits(f._fract_bits){
	std::cout << "Copy constructor called" << std::endl;
}

//? Copy Assignment Operator
Fixed& Fixed::operator =(Fixed const &f){
	Fixed result;
	result._value = f._value;
	result._fract_bits = f._fract_bits;
	std::cout << "Assignation operator called" << std::endl;
	return (result);
}

const int Fixed::getRawBits(void){
	return (round(this->_value * (1 << this->_fract_bits)));
}

void Fixed::setRawBits(int const raw){
	this->_value = raw;
}
