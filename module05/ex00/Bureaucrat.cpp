/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:57:53 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 10:48:03 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){
	std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Default Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b){
	std::cout << "Copy Constructor called" << std::endl;
	*this = b;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade){
	std::cout << "Parameterized Constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &b){
	this->name = b.getName();
	this->grade = b.getGrade();
	return (*this);
}

std::string Bureaucrat::getName(void)const {
	return (this->name);
}

int Bureaucrat::getGrade(void)const {
	return (this->grade);
}

void Bureaucrat::incrementGrade(void){
	if (this->grade - 1 < 1)
		throw(GradeTooHighException);
	this->grade -= 1;
}

void Bureaucrat::decrementGrade(void){
	if (this->grade + 1 > 150)
		throw(GradeTooLowException);
	this->grade += 1;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const &b){
	os << b.getName() << ", bureaucrate grade " << b.getGrade();
	return (os);
}
