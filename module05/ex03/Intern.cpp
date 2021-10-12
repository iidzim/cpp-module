/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:23:49 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 13:18:24 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef Form* (Intern::*PTR)(std::string);

Intern::Intern(void){
}

Intern::~Intern(void){
}

Intern::Intern(const Intern& intern){
    *this = intern;
}

Intern& Intern::operator=(const Intern& intern){
    (void)intern;
    return (*this);
}

Form* Intern::CreateShrubberyCreationForm(std::string target){
    Form* Shrubbery = new ShrubberyCreationForm(target);
    return (Shrubbery);
}

Form* Intern::CreateRobotomyRequestForm(std::string target){
    Form* Robotomy = new RobotomyRequestForm(target);
    return (Robotomy);
}

Form* Intern::CreatePresidentialPardonForm(std::string target){
    Form* Presidential = new PresidentialPardonForm(target);
    return (Presidential);
}

Form* Intern::makeForm(std::string name, std::string target){
    PTR ptr[3] = {&Intern::CreateShrubberyCreationForm, &Intern::CreateRobotomyRequestForm, &Intern::CreatePresidentialPardonForm};
    std::string Forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    for (int i = 0; i < 3; i++){
        if (name.compare(Forms[i]) == 0)
            return (this->*ptr[i])(target);
    }
    return (NULL);
}
