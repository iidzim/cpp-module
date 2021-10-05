/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:50:48 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/05 18:57:45 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
	    FragTrap(void);
	    ~FragTrap(void);
	    FragTrap(std::string name);
	    FragTrap(const FragTrap& c);
	    FragTrap& operator=(FragTrap const &c);
        void highFivesGuys(void);
};

#endif
