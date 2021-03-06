/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:39:49 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/29 13:00:16 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
    std::string _type;
public:
    Weapon(std::string type);
    ~Weapon();
    const std::string& getType(void);
    void setType(std::string type);
};

#endif