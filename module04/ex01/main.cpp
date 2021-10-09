/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:34:09 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 13:08:37 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void){

    int N = 10;
    Animal *animals[N];
    for (int i = 0; i < N; i++)
    {
        if ((i % 2) == 0)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    
    for (int i = 0; i < N; i++){
        std::cout << animals[i]->getType() << "  ";
        animals[i]->makeSound();
    }
    for (int i = 0; i < N; i++)
        delete animals[i];

    return (0);
}
