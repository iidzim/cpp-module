/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:11:54 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/14 20:16:36 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void){

	Bureaucrat b1("boss", 1);
	Bureaucrat b2("employee", 150);
	try{
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		// b2.incrementGrade();
		// b2.decrementGrade();
		// b1.decrementGrade();
		b1.incrementGrade();
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}