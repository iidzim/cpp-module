/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:10:16 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/03 17:38:46 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main(void){

// 	Fixed a;
// 	Fixed const b(Fixed(5.05f) * Fixed(2));
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return (0);
// }

int	main( void )
{
	Fixed a;
	// Fixed c(4.2f);
	// Fixed d(13.37f);
	Fixed c(5);
	Fixed d(15);

	std::cout << "Increment/Decrement Operators\n";
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << "\nArithmetic Operators\n";
	std::cout << "nbr1: " << c << std::endl;
	std::cout << "nbr2: " << d << std::endl;
	std::cout << "nbr1 + nbr2 :" << c + d << std::endl;
	std::cout << "nbr2 - nbr1 :" << d - c << std::endl;
	std::cout << "nbr1 * nbr2 :" << c * d << std::endl;
	std::cout << "nbr2 / nbr1 :" << d / c << std::endl;
	
	std::cout << "\nComparison Operators\n";
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 = " << c << "  nbr2 = " << d << std::endl;
	std::cout << "nbr1 > nbr2 :" << (c > d) << std::endl;
	std::cout << "nbr1 < nbr2 :" << (c < d) << std::endl;
	std::cout << "nbr1 >= nbr2 :" << (c >= d) << std::endl;
	std::cout << "nbr1 <= nbr2 :" << (c <= d) << std::endl;
	std::cout << "nbr1 == nbr2 :" << (c == d) << std::endl;
	std::cout << "nbr1 != nbr2 :" << (c != d) << std::endl;
	
	// c = Fixed(4.2f);
	// d = Fixed(13.37f);
	// std::cout << "max of nbr1 and nbr2 is :" << Fixed::max(c, d) << std::endl;
	// c = Fixed(4.2f);
	// d = Fixed(13.37f);
	// std::cout << "min of nbr1 and nbr2 is :" << Fixed::min(c, d) << std::endl;

	return (EXIT_SUCCESS);
}