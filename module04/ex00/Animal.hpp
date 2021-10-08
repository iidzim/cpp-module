/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:50:42 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 13:22:54 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal{
  protected;  
    std::string _name;
  public:
    Animal(void);
    ~Animal(void);
    Animal(const Animal& a);
	  Animal& operator=(Animal const &c);
    void set_type(std::string);
    std::string get_type(void);
    void makeSound(void);
};

#endif

//? polymorphism 
//? pure function '= 0' at the end of the function prototype
//? abstract class