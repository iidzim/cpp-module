/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:17:51 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 10:45:49 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

class Bureaucrat{
	protected:
		const std::string name;
		int grade;
	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& b);
		Bureaucrat& operator=(Bureaucrat const &b);
		std::string getName(void)const;
		int getGrade(void)const;
		void incrementGrade(void);
		void decrementGrade(void);
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