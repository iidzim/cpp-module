/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:06:01 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/28 13:36:53 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (void){

    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    
    std::cout << "address of the string: " << &str << std::endl; 
    std::cout << "address of the string using stringPTR" << stringPTR << std::endl;
    std::cout << "address of the string using stringREF" <<  << std::endl;
    std::cout << "value of the string using stringPTR" << *stringPTR << std::endl;
    std::cout << "value of the string using stringREF" << stringREF << std::endl;
    return (0);
}