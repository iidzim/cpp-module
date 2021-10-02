/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:21:10 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/02 15:36:33 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
  private:
    int _value;
    static const int _fract_bits = 8;
  public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed& f);
    Fixed operator =(Fixed const &f);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif