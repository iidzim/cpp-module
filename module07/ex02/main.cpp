/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:29:41 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/20 16:37:06 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 10

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    std::cout  << "----Array-----" << std::endl;
    for (int i = 0; i < MAX_VAL; i++){
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        std::cout  << numbers[i] << std::endl;
    }
    std::cout  << "--------------" << std::endl;
    
    //? assignment operator && copy constructor
    Array<int> tmp = numbers;
    Array<int> test(tmp);
        
    for (int i = 0; i < MAX_VAL; i++){
        if (mirror[i] != test[i] || numbers[i] != tmp[i]){
            std::cerr << "didn't save the same value!!" << std::endl;
            return (1);
        }
    }
    
    try{
        numbers[-2] = 0;
    }
    catch(const std::exception& e){
        std::cout << "out of range" << std::endl;
    }
    
    try{
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e){
        std::cout << "out of range" << std::endl;
    }

    std::cout  << "\n----Array2-----" << std::endl;
    for (int i = 0; i < MAX_VAL; i++){
        numbers[i] = rand();
        std::cout  << numbers[i] << std::endl;
    }
    std::cout  << "--------------" << std::endl;
    
    delete [] mirror;
    return 0;
}
