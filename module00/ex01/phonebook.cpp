/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:36:50 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/07 21:40:15 by iidzim           ###   ########.fr       */
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
    std::cout << std::endl;
}

std::string display_format(std::string word){
    if (word.size() <= 10)
        return (word);
    std::string temp (word, 0, 9);
    temp += ".";
    return (temp);
}

void Phonebook::search(int n){
    int index;
    std::string x;

    std::cout << std::setw(10) << "index" << " | " << std::setw(10) << "first name" << " | ";
    std::cout << std::setw(10) << "last name" << " | " << std::setw(10) << "nickname" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << std::setw(10) << i+1 << " | ";
        std::cout << std::setw(10) << display_format(contact[i].get_firstname()) << " | ";
        std::cout << std::setw(10) << display_format(contact[i].get_lastname()) << " | " ;
        std::cout << std::setw(10) << display_format(contact[i].get_nickname()) << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Index to contact > ";
    getline(std::cin, x);
    try {
        index = stoi(x);
        throw(1);
    }
    catch(...){
        std::cout << "invalid index" << std::endl;
    }
    if (index <= n && index > 0)
    {
        std::cout << "Contact index " << index << std::endl;
        std::cout << "First name    = " << contact[index - 1].get_firstname() << std::endl;
        std::cout << "Last name     = " << contact[index - 1].get_lastname() << std::endl;
        std::cout << "Nickname      = " << contact[index - 1].get_nickname() << std::endl;
        std::cout << "Phone number  = " << contact[index - 1].get_phonenumber() << std::endl;
        std::cout << "Darkest secret= " << contact[index - 1].get_darkestsecret() << std::endl << std::endl;
    }
}

void Phonebook::exit(){
    std::cout << "Bye" << std::endl;
}

std::string start_phonebook(void){
    std::string action;

    std::cout << "* ADD to add a contact" << std::endl;
    std::cout << "* SEARCH to display the phonebook" << std::endl;
    std::cout << "* EXIT to exit the prg" << std::endl;
    std::cout << "> ";
    getline(std::cin, action);
    return (action);
}

int main(void)
{
    Phonebook my_pb;
    std::string action;
    int n, is_full;

    is_full = n = 0;
    while (1){
        action = start_phonebook();
        std::cout << std::endl;
        if (action.compare("ADD") == 0){
            if (n >= 8){
                std::cout << "/!\\ Phonebook is full" << std::endl;
                continue;
            }
            else{
                my_pb.add(n);
                n++;
            }
        }
        else if (action.compare("SEARCH") == 0)
            my_pb.search(n);
        else if (action.compare("EXIT") == 0){
            my_pb.exit();
            break;
        }
        else
            std::cout << "Wrong operation !!" << std::endl;
    }
    return (0);
}
