/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:57:53 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 19:47:50 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name(name), grade(grade){
	std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Default Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b){
	std::cout << "Copy Constructor called" << std::endl;
	*this = b;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &b){
	this->name = b.name;
	this->grade = b.grade;
	return (*this);
}

std::string Bureaucrat::getName(void){
	return (this->name);
}

int Bureaucrat::getGrade(void){
	return (this->grade);
}

void Bureaucrat::incrementGrade(void){
	if (this->grade - 1 < 1)
		throw(GradeTooHighException::msg());
	this->grade -= 1;
}

void Bureaucrat::decrementGrade(void){
	if (this->grade + 1 > 150)
		throw(GradeTooLowException::msg());
	this->grade += 1;
}

std::ostream& Bureaucrat::operator<<(std::ostream& os, Bureaucrat const &b){
	os << b.getName() << ", bureaucrate grade " << b.getGrade();
	return (os);
}
