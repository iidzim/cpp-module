/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:11:54 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/14 20:38:55 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void){

    Intern someRandomIntern;
    // Form* rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Home");
    // Form* rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    Form* rrf = someRandomIntern.makeForm("PresidentialPardonForm", "prisoner");
    Bureaucrat bur("BUREAUCRAT11", 1);
    try{
        rrf->beSigned(bur);
        bur.signForm(*rrf);
        rrf->execute(bur);
        // bur.executeForm(*rrf);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
