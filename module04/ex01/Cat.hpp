/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:24:49 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 19:40:52 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
  private:
	Brain* _brain;
  public:
	Cat(void);
	virtual ~Cat(void);
	Cat(const Cat& cat);
	Cat& operator=(Cat const &cat);
	void makeSound(void) const;
	Brain* getBrain(void) const;
	void setBrain(std::string idea);
};

#endif
