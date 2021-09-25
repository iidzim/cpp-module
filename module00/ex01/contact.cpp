/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:47:41 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/25 12:53:05 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string Contact::get_firstname(void){
    return (this->_first_name);
}

std::string Contact::get_lastname(void){
    return (this->_last_name);
}

std::string Contact::get_nickname(void){
    return (this->_nickname);
}

std::string Contact::get_phonenumber(void){
    return (this->_phone_number);
}

std::string Contact::get_darkestsecret(void){
    return (this->_darkest_secret);
}

void Contact::set_firstname(std::string firstname){
    this->_first_name = firstname;
}

void Contact::set_lastname(std::string lastname){
    this->_last_name = lastname;
}

void Contact::set_nickname(std::string nickname){
    this->_nickname = nickname;
}

void Contact::set_phonenumber(std::string phonenumber){
    this->_phone_number = phonenumber;
}

void Contact::set_darkestsecret(std::string darkestsecret){
    this->_first_name = darkestsecret;
}
