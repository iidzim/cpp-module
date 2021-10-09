/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:11:15 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 17:20:03 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void){

    int N = 5;
    //? cannot instantiate an object from an abstract class -eg: Animal
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
    return (0);
}
