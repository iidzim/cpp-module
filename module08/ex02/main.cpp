/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:14:48 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/23 12:28:37 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite){
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    MutantStack<int> s(mstack);
    srand(time(NULL));
    for (int i = 0; i < 20; i++){
        int value = rand() % 100;
        s.push(value);
    }
    std::cout << "--------------" << std::endl;
    MutantStack<int>::iterator cursor;
    for (cursor = s.begin(); cursor < s.end() ; cursor++)
        std::cout << *cursor << " ";
    std::cout << std::endl;
    std::cout << "--------------" << std::endl;
    
    MutantStack<int> new_stack = s;
    MutantStack<int>::iterator cursor2;
    for (cursor2 = s.end() - 1 ; cursor2 >= s.begin() ; cursor2--){
        new_stack.push(*cursor2);
        std::cout << new_stack.top() << " ";
    }
    std::cout << std::endl;
    std::cout << "--------------" << std::endl;
    
    new_stack.pop();
    new_stack.pop();
    new_stack.pop();
    std::cout << "size -> " << new_stack.size() << std::endl;
    std::cout << "--------------" << std::endl;

    MutantStack<std::string> string_stack;
    string_stack.push("cluster");
    string_stack.push("agora");
    string_stack.push("playground");
    std::cout << "top -> " << string_stack.top() << std::endl;
    std::cout << "size -> " << string_stack.size() << std::endl;
    MutantStack<std::string>::iterator iter;
    for (iter = string_stack.begin(); iter < string_stack.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;
    return (0);
}
