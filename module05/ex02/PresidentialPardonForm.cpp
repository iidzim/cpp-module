/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:29:50 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 18:16:22 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):_name("RobotomyRequestForm"), _sign_grade(25), _exec_grade(5){ 
}

PresidentialPardonForm::~PresidentialPardonForm(void){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):_name("RobotomyRequestForm"), _sign_grade(25), _exec_grade(5){
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& f){
    *this = f;
}

PresidentialPardonForm& operator=(const PresidentialPardonForm &f):_name("RobotomyRequestForm"), _sign_grade(25), _exec_grade(5){
    this->_is_signed = false;
    return (*this);
}

void PresidentialPardonForm::Action(std::string target){
    std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
