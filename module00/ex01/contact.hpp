/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:47:45 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/25 12:58:54 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
public:
    std::string get_firstname();
    std::string get_lastname();
    std::string get_nickname();
    std::string get_phonenumber();
    std::string get_darkestsecret();
    void set_firstname(std::string firstname);
    void set_lastname(std::string lastname);
    void set_nickname(std::string nickname);
    void set_phonenumber(std::string phonenumber);
    void set_darkestsecret(std::string darkestsecret);
};

#endif