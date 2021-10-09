/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:17:51 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 18:02:22 by iidzim           ###   ########.fr       */
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
        Bureaucrat& operator=(const Bureaucrat& b);
    class {
        
    };
    class {
        //? 4:35 class with execption
        
    };
    
};

#endif