/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:57:53 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 18:01:12 by iidzim           ###   ########.fr       */
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
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b){
    
}

