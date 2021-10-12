/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:18:32 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 20:09:06 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
  protected:
    std::string _type;
  public:
    WrongAnimal(void);
    virtual ~WrongAnimal(void);
    WrongAnimal(const WrongAnimal& Wronganimal);
    WrongAnimal(std::string type);
	  WrongAnimal& operator=(WrongAnimal const &c);
    void set_type(std::string);
    std::string getType(void)const;
    void makeSound(void) const;
};

#endif