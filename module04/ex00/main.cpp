/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:16:58 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 20:41:23 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void){
    
    Animal animal;
    Dog dog;
    Cat cat;
    animal.makeSound();
    dog.makeSound();
    cat.makeSound();
    return (0);
}
