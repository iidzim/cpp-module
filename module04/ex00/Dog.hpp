/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:25:33 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 13:25:49 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

class Dog
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();

		Dog& operator=( Dog const & rhs );

	private:

};

std::ostream & operator<<( std::ostream & o, Dog const & i );

#endif
