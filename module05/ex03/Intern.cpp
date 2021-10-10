/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:52:02 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 18:53:08 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){    
}

Intern::~Intern(void){    
}

Intern::Intern(const Intern& intern){
    *this = intern;
}

Intern& operator=(Intern const &intern){
    return (*this);
}

Form* makeForm(std::string form_name, std::string target){
    
}
