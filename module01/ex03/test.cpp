/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:07:51 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/29 16:21:44 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

class foo{
  public:
    string name;
    
    int f(void);
};

int foo::f(string s){
    cout << "pointer to member function" << s << endl;
    return (1);
}

int main (void){
    int (foo::*fptr)(string) = &foo::f;
    foo object;
    (object.*fptr)("call member function through an object");
    foo *p=&object;
    (p->*fptr)("call member function through a pointer");
    return (0);
}