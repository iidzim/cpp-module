/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:57:53 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/14 20:14:57 by iidzim           ###   ########.fr       */
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

Bureaucrat::Bureaucrat(std::string name, int grade): name(name){
	std::cout << "Parameterized Constructor called" << std::endl;
	if (grade > 150)
		throw(GradeTooLowException());
	if (grade < 1)
		throw(GradeTooHighException());
	this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b){
	this->grade = b.getGrade();
	return (*this);
}

std::string Bureaucrat::getName(void)const{
	return (this->name);
}

int Bureaucrat::getGrade(void)const{
	return (this->grade);
}

void Bureaucrat::incrementGrade(void){
	if (this->grade - 1 < 1)
		throw(GradeTooHighException());
	this->grade -= 1;
}

void Bureaucrat::decrementGrade(void){
	if (this->grade + 1 > 150)
		throw(GradeTooLowException());
	this->grade += 1;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const &b){
	os << b.getName() << ", bureaucrate grade " << b.getGrade();
	return (os);
}
