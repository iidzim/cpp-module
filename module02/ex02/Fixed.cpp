/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:09:35 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 18:21:45 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//? Default Constructor
Fixed::Fixed(void) : _value(0){
}

//? Default Destructor
Fixed::~Fixed(void){
}

//? Copy Constructor
Fixed::Fixed(const Fixed& f){
	*this = f;
}

//? Copy Assignment Operator
Fixed& Fixed::operator=(Fixed const &f){
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
    this->_value = i * (1 << this->_fract_bits);
}

//? constructor -> constant float as a parameter
Fixed::Fixed(const float f){
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
Fixed& Fixed::operator++(){
    ++(this->_value);
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed copy = (*this);
    operator++(); //? or ++(*this);
    return (copy);
}

// //? Pre-decrement and post-decrement operators
Fixed& Fixed::operator--(){
    --(this->_value);
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed copy = (*this);
    operator--();
    return (copy);
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2){
    return(f1 > f2 ? f2 : f1);
}

Fixed& Fixed::min(Fixed const &f1, Fixed const &f2){
    static Fixed min = f1 > f2 ? f2 : f1;
    return (min);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2){
    return (f1 < f2 ? f2 : f1);
}

Fixed& Fixed::max(Fixed const &f1, Fixed const &f2){
    static Fixed max = f1 < f2 ? f2 : f1;
    return (max);
}
