/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:45:39 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/30 13:21:29 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main (void){

    std::ifstream ifs("test");
    std::ofstream ofs("test.replace");
    if (!ifs.good() || !ofs.good())
    {
        std::cout << "Invalid stream " << std::endl;
        return (EXIT_FAILURE);
    }
    std::string buff;
    std::string s1, s2;
    size_t pos;
    s1 = "philosophy";
    s2 = "CPP";
    while (!ifs.eof()){
        getline(ifs, buff);
        pos = buff.find(s1);
        while (pos < buff.size()){
            std::string str1 = buff.substr(0, pos);
            std::string str2 = buff.substr(pos + s1.size());
            buff = str1 + s2 + str2;
            size_t i = buff.find(s1);
            if (pos == i)
                break;
            pos = buff.find(s1);
        }
        ofs << buff << std::endl;
    }
    ifs.close();
    ofs.close();
    return (0);
}