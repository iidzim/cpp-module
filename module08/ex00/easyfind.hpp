/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:40:40 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/23 16:06:56 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <list>
#include <iostream>
#include <string>
#include <exception>
#include <time.h>

template <typename T>
void easyfind(T tab, int n){
    typename T::iterator it = std::find (tab.begin(), tab.end(), n);
    if (it != tab.end()){
        std::cout << "First occurrence of " << *it << " at tab[";
        std::cout << std::distance(tab.begin(), it) << "]" << std::endl;
    }
    else
        throw "";
}

#endif