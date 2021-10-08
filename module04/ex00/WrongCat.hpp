/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:14:06 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 21:24:33 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
  public:
	WrongCat(void);
	~WrongCat(void);
	WrongCat(const WrongCat& wrongcat);
	WrongCat& operator=(WrongCat const &wrongcat);
	void makeSound(void) const;
};

#endif