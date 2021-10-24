/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:44:35 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/24 16:11:11 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <string>
#include <exception>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>{
  public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack(void){}
    ~MutantStack(void){}
    MutantStack(const MutantStack& stack){ *this = stack; }
    MutantStack& operator=(const MutantStack& stack){
        this->c = stack.c;
        return (*this);
      }
    iterator begin(void){ return (this->c.begin()); }
    iterator end(void){ return (this->c.end()); }
};

#endif
