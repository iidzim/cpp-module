/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:47:47 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/30 17:57:45 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main (int argc, char **argv){

    Karen K;
    if (argc == 2){   
        switch (argv[1]){
            case "Warning":
                //? complain(log_level) - pointer to member function * display the warning
                break;
            case "info":
                //* complain(log_level) - pointer to member function 
                break;
            case "debug":
                //* complain(log_level) - pointer to member function 
                break;
            case "error":
                //* complain(log_level) - pointer to member function 
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
