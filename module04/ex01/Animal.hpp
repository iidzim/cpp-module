/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:50:42 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 13:06:29 by iidzim           ###   ########.fr       */
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
    virtual ~Animal(void);
    Animal(const Animal& animal);
    Animal(std::string type);
	  Animal& operator=(Animal const &c);
    void set_type(std::string);
    std::string getType(void)const;
    virtual void makeSound(void) const;
};

#endif
