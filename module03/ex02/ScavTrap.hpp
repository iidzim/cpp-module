/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:15:34 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/05 18:52:41 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap{
    public:
	    ScavTrap(void);
	    ~ScavTrap(void);
	    ScavTrap(std::string name);
	    ScavTrap(const ScavTrap& c);
	    ScavTrap& operator=(ScavTrap const &c);
		void attack(std::string const & target);
		void guardGate();
};

#endif
