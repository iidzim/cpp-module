/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:05:38 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/11 19:21:16 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& f);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& f);
		void execute(Bureaucrat const & executor)const;
};

#endif