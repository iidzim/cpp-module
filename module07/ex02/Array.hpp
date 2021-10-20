/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:20:27 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/20 16:38:53 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <time.h>

template <typename T>
class Array{
  private:
    T* _array;
    int _size;
  public:
    Array(void){
        this->_array = new T[0];
        this->_size = 0;
    }

    ~Array(void){
        delete[]_array;
    }

    Array(unsigned int n){
        this->_size = n;
        this->_array = new T[n];
    }

    Array(const Array<T>& tab){
        *this = tab;
    }

    Array<T>& operator=(const Array<T>& tab){
        if (this != &tab){
            this->_size = tab._size;
            this->_array = new T[this->_size];
            for (int i = 0; i < this->_size; i++)
                this->_array[i] = tab._array[i];
        }
        return (*this);
    }

    int size(){
        return (this->_size);
    }

    T& operator[](int index){
        if (index >= this->size() || index < 0)
            throw std::exception();
        return (this->_array[index]);
    }

    const T& operator[](int index || index < 0) const{
        if (index >= this->size())
            throw std::exception();
        return (this->_array[index]);
    }
};

#endif