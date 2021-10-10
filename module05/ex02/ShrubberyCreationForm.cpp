/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:18:45 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 15:35:36 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):Form("ShrubberyCreationForm", 145, 137){ 
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
        
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& f){
    *this = f;
}

ShrubberyCreationForm& operator=(const ShrubberyCreationForm &f){
    
    return (*this);
}

void ShrubberyCreationForm::Action(std::string target){
    
}

//?:Form("ShrubberyCreationForm", 145, 137)