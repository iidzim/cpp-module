/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:11:54 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 10:43:47 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void){

	Bureaucrat b1("boss", 1);
	Bureaucrat b2("employee", 150);
	try{
		b2.incrementGrade();
		b1.decrementGrade();
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}