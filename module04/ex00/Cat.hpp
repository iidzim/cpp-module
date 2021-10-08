/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:24:49 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 21:11:07 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
  public:
	Cat(void);
	~Cat(void);
	Cat(const Cat& cat);
	Cat& operator=(Cat const &cat);
	void makeSound(void) const;
};

#endif
