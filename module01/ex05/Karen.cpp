/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:58:54 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/30 18:34:09 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef void (Karen::*PTR)(void);

Karen::Karen(void){
    return ;
}

Karen::~Karen(void){
    return ;
}

void Karen::debug(void){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\
        I just love it!" << std::endl;
}

void Karen::warning(void){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free."  << std::endl;
    std::cout << "I’ve been coming here for years an you just started working here last month." << std::endl;
}

void Karen::info(void){
    std::cout << "[ INFO ]" << std::endl;
    std::cout <<  "I cannot believe adding extra bacon cost more money. \
        You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::error(void){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level){
    
    PTR Ptr[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error}; 
    std::string log[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (!level.compare(log[i]))
            (this->*Ptr[i])();
    }
}
