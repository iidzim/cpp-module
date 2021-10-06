/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:56 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/06 18:05:43 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
  private:
    std::string _name;
  public:
    DiamondTrap(void);
	  ~DiamondTrap(void);
    DiamondTrap(std::string name);
	  DiamondTrap(const DiamondTrap& c);
	  DiamondTrap& operator=(DiamondTrap const &c);
    void attack(std::string const & target);
    void whoAmI(void);
};

#endif
