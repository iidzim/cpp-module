/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:09:35 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/04 13:07:13 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//? Default Constructor
Fixed::Fixed(void) : _value(0){
	// std::cout << "Default constructor called" << std::endl;
}

//? Default Destructor
Fixed::~Fixed(void){
	// std::cout << "Destructor called" << std::endl;
}

//? Copy Constructor
Fixed::Fixed(const Fixed& f){
	// std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

//? Copy Assignment Operator
Fixed& Fixed::operator=(Fixed const &f){
	// std::cout << "Assignation operator called" << std::endl;
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
    // std::cout << "Int constructor called" << std::endl;
    this->_value = i * (1 << this->_fract_bits);
}

//? constructor -> constant float as a parameter
Fixed::Fixed(const float f){
    // std::cout << "Float constructor called" << std::endl;
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

//************

//?arithmetic operators + - * /
Fixed Fixed::operator+(Fixed const &f) const{
    return Fixed((this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(Fixed const &f) const{
    return Fixed((this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*(Fixed const &f) const{
    return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(Fixed const &f) const{
    return Fixed(this->toFloat() / f.toFloat());
}

//?comparaison operators > < >= <= == !=
bool Fixed::operator>(Fixed const &f) const{
    return (this->_value > f.getRawBits());
}

bool Fixed::operator<(Fixed const &f) const{
    return (this->_value < f.getRawBits());
}

bool Fixed::operator>=(Fixed const &f) const{
    return (this->_value >= f.getRawBits());
}

bool Fixed::operator<=(Fixed const &f) const{
    return (this->_value <= f.getRawBits());
}

bool Fixed::operator==(Fixed const &f) const{
    return (this->_value == f.getRawBits());
}

bool Fixed::operator!=(Fixed const &f) const{
    return (this->_value != f.getRawBits());
}

//? Pre-increment and post-increment operators
//* prefix
Fixed& Fixed::operator++(){
    ++(this->_value);
    return (*this);
}

//* postfix
Fixed Fixed::operator++(int){
    Fixed copy = (*this);
    operator++(); //? or ++(*this);
    return (copy);
}

// //? Pre-decrement and post-decrement operators
//* prefix
Fixed& Fixed::operator--(){
    --(this->_value);
    return (*this);
}

//* postfix
Fixed Fixed::operator--(int){
    Fixed copy = (*this);
    operator--();
    return (copy);
}

Fixed& Fixed::min(Fixed f1, Fixed f2){
    static Fixed min = f1 > f2 ? f2 : f1;
    return (min);
}

// static Fixed& Fixed::min(Fixed const &f1, Fixed const &f2){
    
// }

Fixed& Fixed::max(Fixed f1, Fixed f2){
    static Fixed max = f1 < f2 ? f2 : f1;
    return (max);
}

// static Fixed& Fixed::max(Fixed const &f1, Fixed const &f2){
    
// }
