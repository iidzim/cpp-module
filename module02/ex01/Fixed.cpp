/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:44:32 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/03 13:03:53 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//? Default Constructor
Fixed::Fixed(void) : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

//? Default Destructor
Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

//? Copy Constructor
Fixed::Fixed(const Fixed& f){
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

//? Copy Assignment Operator
Fixed& Fixed::operator=(Fixed const &f){
	std::cout << "Assignation operator called" << std::endl;
	this->_value = f.getRawBits();
	return (*this);
}

//? getter
int Fixed::getRawBits(void) const{
	return (this->_value);
}

//? setter
void Fixed::setRawBits(int const raw){
	this->_value = raw;
}

//? constructor -> constant integer as a parameter
Fixed::Fixed(const int i){
    std::cout << "Int constructor called" << std::endl;
    this->_value = i * (1 << this->_fract_bits);
}

//? constructor -> constant float as a parameter
Fixed::Fixed(const float f){
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(f * (1 << this->_fract_bits));
}

//? converts the fixed point value to a floating point value
float Fixed::toFloat( void ) const{
    return ((float)this->_value / (1 << (this->_fract_bits)));
}

//? converts the fixed point value to an integer value
int Fixed::toInt( void ) const{
    return ((int)this->_value / (1 << (this->_fract_bits)));
}

//? overload to the « operator
std::ostream& operator<<(std::ostream& os, Fixed const &f){
    os << f.toFloat();
    return (os);
}
