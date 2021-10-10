/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:18:45 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 18:32:00 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):_name("RobotomyRequestForm"), _sign_grade(145), _exec_grade(134){ 
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):_name("RobotomyRequestForm"), _sign_grade(145), _exec_grade(134){ 
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& f){
    *this = f;
}

ShrubberyCreationForm& operator=(const ShrubberyCreationForm &f):_name("RobotomyRequestForm"), _sign_grade(145), _exec_grade(134){
    this->_is_signed = false;
    return (*this);
}

void ShrubberyCreationForm::Action(std::string target){
    std::ofstream ofs(target + "_shrubbery");
    if (!ofs.good())
    {
        std::cout << "Invalid stream" << std::endl;
        return (EXIT_FAILURE);
    }
    ofs << "          &&& &&  & &&" << std::endl;
    ofs << "      && &\/&\|& ()|/ @, &&" << std::endl;
    ofs << "      &\/(/&/&||/& /_/)_&/_&" << std::endl;
    ofs << "   &() &\/&|()|/&\/ '%" & ()"" << std::endl;
    ofs << "  &_\_&&_\ |& |&&/&__%_/_& &&" << std::endl;
    ofs << "&&   && & &| &| /& & % ()& /&&" << std::endl;
    ofs << " ()&_---()&\&\|&&-&&--%---()~" << std::endl;
    ofs << "     &&     \|||" << std::endl;
    ofs << "             |||" << std::endl;
    ofs << "             |||" << std::endl;
    ofs << "             |||" << std::endl;
    ofs << "       , -=-~  .-^- " << std::endl;
    ofs.close();
}
