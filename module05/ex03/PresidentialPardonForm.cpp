/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:06:41 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 12:08:17 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5){
}

PresidentialPardonForm::~PresidentialPardonForm(void){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5){
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& f){
    (*this) = f;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& f){
    this->_target = f._target;
    // this->setIsSigned(f.getIsSigned());
    return (*this);
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor)const{
    try{
        this->check_permission(executor);
        std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
        return (0);
    }
    return (1);
}
