/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:42:22 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/17 20:51:39 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void){
    int n;
    srand(time(NULL));
    n = rand() % 3;
    if (n == 0){
        std::cout << "class A" << std::endl;
        return (new A());
    }
    if (n == 1){
        std::cout << "class B" << std::endl;
        return (new B());
    }
    std::cout << "class C" << std::endl;
    return (new C());
}

void identify(Base* p){
    
    A *child1 = dynamic_cast<A *>(p);
    if (child1)
        std::cout << "A" << std::endl;
    B *child2 = dynamic_cast<B *>(p);
    if (child2)
        std::cout << "B" << std::endl;
    C *child3 = dynamic_cast<C *>(p);
    if (child3)
        std::cout << "C" << std::endl;
}

void identify(Base& p){
    try{
        A child11 = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch(...){};
    try{
        B child22 = dynamic_cast<B &>(p); 
        std::cout << "B" << std::endl;
    }
    catch(...){};
    try{
        C child33 = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    }
    catch(...){};
}

int main (void){

    Base *base;
    base = generate();
    identify(base);
    identify(*base);
    return (0);
}
