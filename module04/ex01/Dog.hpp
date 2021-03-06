/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:25:33 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 18:46:40 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
  private:
	Brain* _brain;
  public:
	Dog(void);
	virtual ~Dog(void);
	Dog(const Dog& dog);
	Dog& operator=(Dog const &dog);
	void makeSound(void) const;
	Brain* getBrain(void) const;
	void setBrain(std::string idea);
};

#endif
