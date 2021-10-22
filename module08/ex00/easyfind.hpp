/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:40:40 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/21 23:45:28 by mac              ###   ########.fr       */
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
    std::vector<int>::iterator it = std::find (tab.begin(), tab.end(), n);
    if (it != tab.end()){
        std::cout << "*First occurrence of t[" << it - tab.begin();
        std::cout << "] -> " << *it << std::endl;
    }
    else
        throw ""; 
}

#endif