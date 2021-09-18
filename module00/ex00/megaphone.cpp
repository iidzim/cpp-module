/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:53:49 by iidzim            #+#    #+#             */
/*   Updated: 2021/09/18 17:53:34 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (int argc, char **argv)
{
    std::string s;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int j = 1; j < argc; j++)
    {
        s = argv[j];
        for (int i = 0; i < (int)s.length(); i++)
            if (std::islower(s[i]))
                s[i] = std::toupper(s[i]);
        std::cout << s;
    }
    std::cout << std::endl;
    return (0);
}
