/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:40:05 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 18:28:32 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): _name("RobotomyRequestForm"), _sign_grade(72), _exec_grade(45){ 
}

RobotomyRequestForm::~RobotomyRequestForm(void){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): _name("RobotomyRequestForm"), _sign_grade(72), _exec_grade(45){ 
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& f){
    *this = f;
}

RobotomyRequestForm& operator=(const RobotomyRequestForm &f):_name("RobotomyRequestForm"), _sign_grade(72), _exec_grade(45){
    this->_is_signed = false;
    return (*this);
}

void RobotomyRequestForm::Action(std::string target){
    int n;
    
    srand(time(NULL));
    n = rand() % 100 + 1;
    std::cout << n << std::endl;
    if (n < 50)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << " : It’s a failure" << std::endl;
}
