/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:38:53 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 18:15:21 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <time.h>
#include <stdlib.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form{
  private:
    std::string _target;
  public:
    RobotomyRequestForm(void);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& f);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& f);
    void Action(std::string target);
};

#endif