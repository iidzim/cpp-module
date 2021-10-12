/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:34:09 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 19:48:21 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void){

    int N = 1;
    Cat *cats[N];
    Dog *dogs[N];
    for (int i = 0; i < N; i++)
    {
        cats[i] = new Cat();
        dogs[i] = new Dog();
    }
    for (int i = 0; i < N; i++){
        std::cout << cats[i]->getType() << "  ";
        cats[i]->makeSound();
        std::cout << dogs[i]->getType() << "  ";
        dogs[i]->makeSound();
    }
    for (int i = 0; i < N; i++){
        delete cats[i];
        delete dogs[i];
    }

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
