/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:17:51 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 19:48:08 by iidzim           ###   ########.fr       */
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
		Bureaucrat(const Bureaucrat& b);
		Bureaucrat& operator=(Bureaucrat const &b);
		std::string getName(void);
		int getGrade(void);
		void incrementGrade(void);
		void decrementGrade(void);
		class GradeTooHighException : public std::exception{
			public:
				std::string msg(void)const /* throw */{ return ("Grade Too High !"); }
		};
		class GradeTooLowException : public std::exception{
			public:
				std::string msg(void)const /* throw */{ return ("Grade Too Low !"); }
		};
};
std::ostream& operator<<(std::ostream& os, Bureaucrat const &b);

#endif