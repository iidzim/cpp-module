/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:36:39 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/02 17:29:36 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {

  private:
    int _value;
    static const int _fract_bits = 8;

  public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed& f);
    Fixed& operator =(Fixed const &f);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed(const int i);
    Fixed(const float f);
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator <<(Fixed const &f);
};

#endif