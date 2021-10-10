/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:11:54 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 18:40:38 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void){

	Bureaucrat b1("boss", 1);
	Bureaucrat b2("employee", 50);
	ShrubberyCreationForm f1("target1");
	RobotomyRequestForm f2("target2");
	PresidentialPardonForm f3("target3");
	try{
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		b2.incrementGrade();
		b1.decrementGrade();
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		f1.beSigned(b1);
		b1.signForm(f1);
		b2.signForm(f2);
		f2.beSigned(b2);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}