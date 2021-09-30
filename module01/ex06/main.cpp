/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:47:47 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/30 18:36:36 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main (int argc, char **argv){

    Karen K;
    if (argc == 2){   
        switch (argv[1]){
            case "DEBUG":
                break;
            case "INFO":
                break;
            case "WARNING":
                break;
            case "ERROR":
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
