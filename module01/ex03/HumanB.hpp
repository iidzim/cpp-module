/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:49:25 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/29 16:42:59 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
private:
    Weapon *_weapon;
    std::string _name;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& weapon);
};

#endif