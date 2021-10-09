/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:11:54 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 19:39:32 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void){

	Bureaucrat b1("boss", 1);
	try{
		b1.incrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException& e){
		std::cout << b1.msg() << std::endl;
	}
	
	Bureaucrat b2("employee", 150);
	try{
		b2.incrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException& e){
		std::cout << b2.msg() << std::endl;
	}
	
	return (0);
}