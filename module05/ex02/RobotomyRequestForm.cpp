/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:03:22 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/11 19:22:54 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45){
}

RobotomyRequestForm::~RobotomyRequestForm(void){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45){
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& f){
    (*this) = f;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& f){
    this->_target = f._target;
    // this->setIsSigned(f.getIsSigned());
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)const{
    int n;
    try{
        this->check_permission(executor);
        srand(time(NULL));
        n = rand() % 100 + 1;
        std::cout << n << std::endl;
        if (n < 50)
            std::cout << _target << " has been robotomized successfully" << std::endl;
        else
            std::cout << _target << " : It’s a failure" << std::endl;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
}
