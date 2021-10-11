/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:17:51 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 14:48:47 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include "Form.hpp"

class Form;
class Bureaucrat{
	protected:
		const std::string name;
		int grade;
	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& b);
		Bureaucrat& operator=(const Bureaucrat& b);
		std::string getName(void)const;
		int getGrade(void)const;
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(const Form& f);
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw(){ return ("Grade Too High !"); }
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw() { return ("Grade Too Low !"); }
		};
};
std::ostream& operator<<(std::ostream& os, Bureaucrat const &b);

#endif