/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:56 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/05 18:16:01 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

class DiamondTrap : public FragTrap, public ScavTrap{
  private:
    std::string _name;
  public:
    FragTrap(void);
	~FragTrap(void);
	FragTrap(const FragTrap& c);
	FragTrap& operator=(FragTrap const &c);
    void whoAmI(void);
};

#endif