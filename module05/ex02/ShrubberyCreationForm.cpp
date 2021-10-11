/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:38:20 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/11 18:27:54 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137){
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137){
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& f){
    (*this) = f;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& f){
    this->_target = f._target;
    // this->_is_signed = f.getIsSigned();
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)const{
    try{
        this->check_permission(executor);
        std::ofstream ofs(this->_target + "_shrubbery");
        if (!ofs.good())
        {
            std::cout << "Invalid stream" << std::endl;
            return ;
        }
        ofs << "     *-*," << std::endl;
        ofs << " ,*\\/|`| \"" << std::endl;
        ofs << " \'  | |'| *," << std::endl;
        ofs << "  \\ `| | |/ )" << std::endl;
        ofs << "   | |'| , /" << std::endl;
        ofs << "   |'| |, /" << std::endl;
        ofs << " __|_|_|_|__" << std::endl;
        ofs << "[___________]" << std::endl;
        ofs << " |         |" << std::endl;
        ofs << " |         |" << std::endl;
        ofs << " |         |" << std::endl;
        ofs << " |_________|" << std::endl;
        ofs.close();
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
}
