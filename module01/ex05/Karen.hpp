/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:24:20 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/30 18:28:43 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Karen(void);
        ~Karen(void);
        void complain(std::string level);
};

#endif