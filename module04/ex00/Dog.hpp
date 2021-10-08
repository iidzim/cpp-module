/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:25:33 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 20:26:52 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
  public:
	Dog(void);
	~Dog(void);
	Dog(const Dog& dog);
	Dog& operator=(Dog const &dog);
	void makeSound(void);
};

#endif
