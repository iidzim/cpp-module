/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:12:26 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/28 11:13:01 by iidzim           ###   ########.fr       */
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

Zombie  *ZombieHorde(int N, std::string name);

#endif