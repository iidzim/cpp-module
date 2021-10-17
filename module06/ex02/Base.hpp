/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:43:45 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/17 20:43:22 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>
#include <exception>
#include <time.h>
#include <stdlib.h>

class Base{
  public:
    virtual ~Base(void){};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

#endif