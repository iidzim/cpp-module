/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:57:53 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 18:04:15 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){
}

Bureaucrat::~Bureaucrat(void){
}

Bureaucrat::Bureaucrat(const Bureaucrat& b){
	*this = b;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name){
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

void Bureaucrat::signForm(const Form& f){
	if (f.getIsSigned() == true)
		std::cout << this->name << " signs " << f.getName() << std::endl;
	else{
		std::cout << this->name << " cannot sign " << f.getName() << " because ";
		std::cout << this->getGrade() << " > " << f.getSignGrade() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form){
	try{
		form.execute(this);
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	}
	catch(std::exception& e){
		std::cout << this->getName() << " cannot execute " << form.getName() << " : " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const &b){
	os << b.getName() << ", bureaucrate grade " << b.getGrade();
	return (os);
}
