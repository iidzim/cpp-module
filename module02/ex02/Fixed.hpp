/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:09:49 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/04 13:07:08 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <ostream>
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
    Fixed& operator=(Fixed const &f);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed(const int i);
    Fixed(const float f);
    float toFloat( void ) const;
    int toInt( void ) const;
    
    Fixed operator+(Fixed const &f) const;
    Fixed operator-(Fixed const &f) const;
    Fixed operator*(Fixed const &f) const;
    Fixed operator/(Fixed const &f) const;
    bool operator>(Fixed const &f) const;
    bool operator<(Fixed const &f) const;
    bool operator>=(Fixed const &f) const;
    bool operator<=(Fixed const &f) const;
    bool operator==(Fixed const &f) const;
    bool operator!=(Fixed const &f) const;
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
    Fixed& min(Fixed f1, Fixed f2);
    // static Fixed& min(Fixed const &f1, Fixed const &f2);
    Fixed& max(Fixed f1, Fixed f2);
    // static Fixed& max(Fixed const &f1, Fixed const &f2);
};

std::ostream& operator<<(std::ostream& os, Fixed const &f);

#endif