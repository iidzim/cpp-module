/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:42:22 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/17 20:20:01 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void){
    Base *a = new A();
    Base *b = new B();
    Base *c = new C();
    
    
}

void identify(Base* p){
    A child1 = dynamic_cast<A *>(p);
    B child2 = dynamic_cast<B *>(p); 
    C child3 = dynamic_cast<C *>(p); 
}

void identify(Base& p){
    A child11 = dynamic_cast<A &>(p);
    B child22 = dynamic_cast<B &>(p); 
    C child33 = dynamic_cast<C &>(p);
}

int main (void){

    try{
        Base *base;
        base = generate();
        identify(base);
        identify(*base);
    }
    catch(...){
    }
    return (0);
}
