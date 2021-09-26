/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:11:27 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/26 14:32:02 by iidzim           ###   ########.fr       */
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
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
    void set_name(std::string name);
    std::string get_name(void);
};

#endif