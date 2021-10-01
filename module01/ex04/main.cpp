/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:45:39 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/01 15:03:46 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main (int argc, char **argv){

    if (argc != 4 )
    {
        std::cout << "Usage : ./replace filename string1 string2" << std::endl;
        return (EXIT_FAILURE);
    }
    std::ifstream ifs(argv[1]);
    if (!ifs.good())
    {
        std::cout << "Invalid stream " << std::endl;
        return (EXIT_FAILURE);
    }
    std::string filename = argv[1], s1 = argv[2], s2 = argv[3];
    for (size_t i = 0; i < filename.length(); i++)
        filename[i] = toupper(filename[i]);
    filename += ".replace";
    std::ofstream ofs(filename);
    if (!ofs.good())
    {
        std::cout << "Invalid stream " << std::endl;
        return (EXIT_FAILURE);
    }
    std::string buff;
    size_t pos;
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