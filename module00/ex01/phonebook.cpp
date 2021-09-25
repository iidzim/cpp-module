/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:36:50 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/25 13:27:06 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"



void Phonebook::add(int n)
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;

    std::cout << "first_name > ";
    getline(std::cin, firstname);
    contact[n].set_firstname(firstname);
    std::cout << "last_name > ";
    getline(std::cin, lastname);
    contact[n].set_lastname(lastname);
    std::cout << "nickname > ";
    getline(std::cin, nickname);
    contact[n].set_nickname(nickname);
    std::cout << "phone_number > ";
    getline(std::cin, phonenumber);
    contact[n].set_phonenumber(phonenumber);
    std::cout << "darkest_secret > ";
    getline(std::cin, darkestsecret);
    contact[n].set_darkestsecret(darkestsecret);
}

void Phonebook::search(int index, int n){
    //* display all contacts
    for (int i = 0; i < n; i++)
    {
        std::cout << "index | first name | last name | nickname" << std::endl;
        std::cout << n << " | " << contact[n].get_firstname() << " | ";
        std::cout << contact[n].get_lastname() << " | " << contact[n].get_nickname() << std::endl;
    }
    if (index < n && index > 0)
    {
        std::cout << " first name = " << contact[n].get_firstname() << std::endl;
        std::cout << " lsst name = " << contact[n].get_lastname() << std::endl;
        std::cout << " nickname = " << contact[n].get_nickname() << std::endl;
        std::cout << "phone number = " << contact[n].get_phonenumber() << std::endl;
        std::cout << "darkest secret = " << contact[n].get_darkestsecret() << std::endl;
    }
    else
        std::cout << "wrong index" << std::endl;
}

void Phonebook::exit(){
    std::cout << "bye" << std::endl;
}

std::string start_phonebook(void){
    std::string action;

    std::cout << "* ADD to add a contact" << std::endl;
    std::cout << "* SEARCH to display the phonebook" << std::endl;
    std::cout << "* EXIT to exit the prg" << std::endl;
    getline(std::cin, action);
    return (action);
}

int main(void)
{
    Phonebook my_pb;
    std::string action;
    int index, n;

    n = 0;
    while (1)
    {
        action = start_phonebook();
        if (action.compare("add") == 0)
        {
            if (n < 8)
                n = n % 8;
            my_pb.add(n);
            n++;
        }
        else if (action.compare("search") == 0)
        {
            std::cout << "index to contact";
            // getline(std::cin, index);
            std::cin >> index;
            my_pb.search(index, n);
        }
        else if (action.compare("exit") == 0)
        {
            my_pb.exit();
            break;
        }
        else
            std::cout << "wrong operation" << std::endl;
    }
    return (0);
}
