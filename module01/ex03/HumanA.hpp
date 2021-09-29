/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:44:47 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/29 17:35:34 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
private:
    std::string _name;
    Weapon &_weapon;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
};

#endif