/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:27:40 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/19 20:19:09 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int main( void ) { //*without struct
//     int a = 2;
//     int b = 3;
//     swap<int>( a, b );
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << min<int>( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << max<int>( a, b ) << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";
//     swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << min<std::string>( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << max<std::string>( c, d ) << std::endl;
//     return (0);
// }

int main( void ) {
    int a = 2;
    int b = 3;
    Functions<int>::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << Functions<int>::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << Functions<int>::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    Functions<std::string>::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << Functions<std::string>::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << Functions<std::string>::max( c, d ) << std::endl;
    return (0);
}
