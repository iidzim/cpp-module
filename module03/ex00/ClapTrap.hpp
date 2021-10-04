/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:19:00 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/04 20:25:05 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap{

  private:
	std::string _name;
	int _Hitpoints;
	int _EnergyPoints;
	int _AttackDamage;

  public:
	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(const ClapTrap& c);
	ClapTrap& operator=(ClapTrap const &c);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif