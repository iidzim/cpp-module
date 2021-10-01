/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:21:10 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/01 19:50:53 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
  private:
    int _value;
    static const int 
  public:
    Fixed(void);
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif