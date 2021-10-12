/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:34:09 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 19:42:57 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void){

    int N = 6;
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

    // Dog basic;
    // {
    //     basic.setBrain("howhaw");
    //     Dog tmp = basic;
    //     std::cout << basic.getBrain() << std::endl;
    //     std::cout << tmp.getBrain() << std::endl;
    //     std::cout << basic.getBrain()->getIdea(2) << std::endl;
    //     std::cout << tmp.getBrain()->getIdea(2) << std::endl;
    // } 
    // {
    //     Cat psspss;
    //     psspss.setBrain("sssssss");
    //     Cat meow = psspss;
    //     std::cout << psspss.getBrain() << std::endl;
    //     std::cout << meow.getBrain() << std::endl;
    //     std::cout << psspss.getBrain()->getIdea(2) << std::endl;
    //     std::cout << meow.getBrain()->getIdea(2) << std::endl;
    // }
    return (0);
}
