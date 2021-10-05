/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:51:15 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/05 16:51:29 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap{
    public:
	    ScavTrap(void);
	    ~ScavTrap(void);
	    ScavTrap(const ScavTrap& c);
	    ScavTrap& operator=(ScavTrap const &c);
		void attack(std::string const & target);
		void guardGate();
};

#endif
