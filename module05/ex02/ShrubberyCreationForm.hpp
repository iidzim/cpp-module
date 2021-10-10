/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:11:20 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 15:24:05 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONDFORM_HPP
# define SHRUBBERYCREATIONDFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form{
  public:
    ShrubberyCreationForm(void);
    ~ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string name);
    ShrubberyCreationForm(const ShrubberyCreationForm& f);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& f);
    void Action(std::string target);
};

#endif