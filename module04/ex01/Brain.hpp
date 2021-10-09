/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:35:38 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 12:38:02 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
  public:
    std::string ideas[100];
    Brain(void);
    ~Brain(void);
    Brain(const Brain& brain);
    void deepCopy(const Brain& brain);
    Brain& operator=(Brain const &brain);
};

#endif