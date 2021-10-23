/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:35:25 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/23 13:28:47 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>
// #include <>

// template <typename T>
// void swap(T& a, T& b){
//     T temp = a;
//     a = b;
//     b = temp;
// }

// template <typename T>
// T &min(T& a, T& b){
//     return ((a > b) ? b : a);
// }

// template <typename T>
// T &max(T& a, T& b){
//     return ((a > b) ? a : b);
// }

//? or

template <typename T>
struct Functions {
    static void swap(T& a, T& b){
        T temp = a;
        a = b;
        b = temp;
    }

    static T &min(T& a, T& b){
        return ((a > b) ? b : a);
    }

    static T &max(T& a, T& b){
        return ((a > b) ? a : b);
    }
};

#endif