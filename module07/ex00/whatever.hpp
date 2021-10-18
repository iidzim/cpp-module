/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:35:25 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/18 17:49:39 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T const &min(const T& a, const T& b){
    return ((a > b) ? b : a);
}

template <typename T>
T const &max(const T& a, const T& b){
    return ((a > b) ? a : b);
}

//? or

template <class T>
struct Functions {
    static void swap(T& a, T& b){
        T temp = a;
        a = b;
        b = temp;
    }
    
    T const &min(const T& a, const T& b){
        return ((a > b) ? b : a);
    }
    
    T const &max(const T& a, const T& b){
        return ((a > b) ? a : b);
    }
}
//* Functions<int>::swap(a, b);

#endif