/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:50:42 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/07 21:37:18 by iidzim           ###   ########.fr       */
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

class Dog : public Animal{
    
};

class Cat : public Animal{
  
};

#endif