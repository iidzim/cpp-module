/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:40:40 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/21 12:54:07 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <string>
#include <exception>
#include <time.h>

template <typename T>
void easyfind(std::vector<T> tab, int n){
    unsigned long i;
    for (i = 0; i < tab.size(); i++){
        if (tab[i] == n){
            std::cout << "First occurrence of t[" << i << "] -> " << tab[i] << std::endl;
            return ;
        }
    }
    throw "";
}

#endif