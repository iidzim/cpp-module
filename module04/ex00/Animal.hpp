/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:50:42 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 20:47:14 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
  protected:
    std::string _type;
  public:
    Animal(void);
    ~Animal(void);
    Animal(const Animal& animal);
    Animal(std::string type);
	  Animal& operator=(Animal const &c);
    void set_type(std::string);
    std::string get_type(void)const;
    void makeSound(void);
};

#endif

//? polymorphism 
//? pure function '= 0' at the end of the function prototype
//? abstract class