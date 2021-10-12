/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:04:46 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/11 19:17:40 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <time.h>
#include <stdlib.h>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form{
	private:
		std::string _target;
	public:
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& f);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& f);
		void execute(Bureaucrat const & executor)const;
};

#endif