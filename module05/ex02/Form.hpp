/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:00:48 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/11 18:26:23 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form{
  private:
	const std::string _name;
	const int _sign_grade;
	const int _exec_grade;
	bool _is_signed;
  public:
	Form(void);
	~Form(void);
	Form(std::string name, int sign_grade, int exec_grade);
	Form(const Form& f);
	Form& operator=(const Form& f);
	std::string getName(void) const;
	int getSignGrade(void) const;
	int getExecGrade(void) const;
	bool getIsSigned(void) const;
	void setIsSigned(bool is_signed);
	void beSigned(const Bureaucrat& b);
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw() { return ("Grade is Too Low !"); }
	};
	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw() { return ("Grade is Too High !"); }
	};
	virtual void execute(Bureaucrat const &executor) const = 0;
	bool check_permission(Bureaucrat const &executor) const;
};

std::ostream& operator<<(std::ostream& os, Form const &f);

#endif