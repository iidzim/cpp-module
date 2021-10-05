/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:15:00 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/05 18:49:32 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap{

  protected:
	std::string _name;
	int _HitPoints;
	int _EnergyPoints;
	int _AttackDamage;

  public:
	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& c);
	ClapTrap& operator=(ClapTrap const &c);
	void setName(std::string name);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
