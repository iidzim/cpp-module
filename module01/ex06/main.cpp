/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:47:47 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/01 15:46:44 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main (int argc, char **argv){

    Karen k;
    int i;
    std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    if (argc == 2){   
        std::string log = argv[1];
        for(i = 0; i < 4; i++)
            if (!log.compare(level[i]))
                break;
        switch (i){
            case 0:
                for(int i = 0; i < 4; i++)
                    k.complain(level[i]);
                break;
            case 1:
                for(int i = 1; i < 4; i++)
                    k.complain(level[i]);
                break;
            case 2:
                for(int i = 2; i < 4; i++)
                    k.complain(level[i]);
                break;
            case 3:
                k.complain(level[3]);
                break;
            default:
                std::cout << "Please choose a log level you want to listen to" << std::endl;
                break;
        }
    }
    else
        std::cout << "Wrong number of arguments" << std::endl;
    return (0);
}
