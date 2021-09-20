/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:36:50 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/20 23:09:10 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void phonebook::add(void)
{
    std::cout << "first_name > " << std::endl;
    std::cin >> first_name;
    std::cout << "last_name > " << std::endl;
    std::cin >> last_name;
    std::cout << "nickname > " << std::endl;
    std::cin >> nickname;
    std::cout << "phone_number > " << std::endl;
    std::cin >> phone_number;
    std::cout << "darkest_secret > " << std::endl;
    std::cin >> darkest_secret;
}

void phonebook::search(void)
{
    std::cout << "index | first name | last name | nickname" << std::endl;
    
}

void phonebook::exit()
{
    std::cout << "bye" << std::endl;
}

int main(void)
{
    phonebook my_pb[8];
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
            if (n < 8)
                n = n % 8;
            my_pb[n].add();
        }
        else if (action.compare("search") == 0)
        {
            for (int i = 0; i < n; i++)
                my_pb[i].search();
            
        }
        else if (action.compare("exit") == 0)
        {
            my_pb[n].exit();
            break;
        }
        else
            std::cout << "wrong operation" << std::endl;
    }
    return (0);
}
