/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:24:40 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 15:48:50 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
}

Cat::Cat(const Cat& src)
{
}

Cat::~Cat(void)
{
}

Cat& Cat::operator=( Cat const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream& operator<<(std::ostream & o, Cat const & i)
{
	//o << "Value = " << i.getValue();
	return o;
}
