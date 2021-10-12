/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:16:58 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/12 20:08:45 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){
    
    // const Animal* meta = new Animal();
    // const Animal* i = new Cat();
    // const Animal* j = new Dog();
    // std::cout << "Type -> " << meta->getType() << " " << std::endl;
    // std::cout << "Type -> " << i->getType() << " " << std::endl;
    // std::cout << "Type -> " << j->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // delete meta;
    // delete i;
    // delete j;
    
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_i = new WrongCat();
    std::cout << wrong_i->getType() << " " << std::endl;
    std::cout << wrong_meta->getType() << " " << std::endl;
    wrong_i->makeSound();
    wrong_meta->makeSound();
    delete wrong_meta;
    delete wrong_i;
    return (0);
}
