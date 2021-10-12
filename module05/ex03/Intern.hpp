/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:17:13 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 13:16:37 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
  public:
    Intern(void);
    ~Intern(void);
    Intern(const Intern& intern);
    Intern& operator=(const Intern& intern);
    Form* CreateShrubberyCreationForm(std::string target);
    Form* CreateRobotomyRequestForm(std::string target);
    Form* CreatePresidentialPardonForm(std::string target);
    Form* makeForm(std::string form_name, std::string target);
};

#endif