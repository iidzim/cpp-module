/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:20:27 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/19 20:58:52 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array<T>{
  private:
    T* _array;
  public:
    Array(void){
        this->_array = new T;
    }
    ~Array(void){
        delete _array;
    }
    Array(unsigned int n){
        this->_array = new T[n];
    }
    Array(const T& tab){
        delete[]_array;
        this->_array = new T;
        *this = tab;
    }
    T& operator=(T const &tab){
        if (this != &tab)
            *(this->_array) = *(tab._array);
        return (*this);
    }
    int size(){
        return (sizeof(this->_array) / sizeof(*(this->_array)));
    }
};

#endif