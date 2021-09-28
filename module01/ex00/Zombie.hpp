/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:11:27 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/28 10:59:18 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    void announce(void);
    void set_name(std::string name);
    std::string get_name(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif