/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:36:50 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/19 23:11:23 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    phonebook my_pb;
    std::string action;
    int n;

    n = 0;
    while (1)
    {
        std::cout << "ADD to add a contact" << std::endl;
        std::cout << "SEARCH to display the phonebook" << std::endl;
        std::cout << "EXIT to exit the prg" << std::endl;
        std::cin >> action;
        if (action.compare("add") == 0)
        {
            
        }
        else if (action.compare("search") == 0)
        {

        }
        else if (action.compare("exit") == 0)
        {
            std::cout << "bye" << std::endl;
            break;
        }
        else
            std::cout << "wrong operation" << std::endl;
    }
    return (0);
}
