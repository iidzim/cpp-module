/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:00:25 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 13:26:39 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void){
    std::cout << "Default Constructor called" << std::endl;
}

Form::~Form(void){
    std::cout << "Default Destructor called" << std::endl;
}

Form::Form(const Form& f){
    std::cout << "Copy Constructor called" << std::endl;
	*this = f;
}

Form::Form(std::string name, int sign_grade, int exec_grade): _name(name){
    std::cout << "Parameterized Constructor called" << std::endl;
	if (sign_grade > 150 || exec_grade > 150)
		throw(GradeTooLowException());
	if (sign_grade < 1 || exec_grade < 1)
		throw(GradeTooHighException());
    this->_sign_grade = sign_grade;
	this->_exec_grade = exec_grade;
	this->_is_signed = false;
}

Form& Form::operator=(const Form& f){
	this->_is_signed = f._is_signed;
	return (*this);
}

std::string Form::getName(void)const{
    return (this->_name);
}

int Form::getSignGrade(void)const{
    return (this->_sign_grade);
}

int Form::getExecGrade(void)const{
    return (this->_exec_grade);
}

bool Form::getIsSigned(void)const{
    return (this->_is_signed);
}

void Form::beSigned(const Bureaucrat& b){
	if (b.getGrade() > this->_sign_grade)
		throw(GradeTooHighException());
	this->_is_signed = true;
}

std::ostream& operator<<(std::ostream& os, const Form& f){
	os << "Form " << this->getName() << " , grade required to sign it " << f.getSignGrade();
	os << " , grade required to execute it " << f.getExecGrade();
	if (f.getIsSigned() == true)
		os << "The Form is signed";
	else
		os << "The Form is not signed";
	return (os);
}
