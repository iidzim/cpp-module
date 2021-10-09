/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:43:23 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 12:51:27 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
    std::cout << "Default Constructor Brain" << std::endl;
}

Brain::~Brain(void){
    std::cout << "Default Destructor Brain" << std::endl;
}

void Brain::deepCopy(const Brain& brain){
    // delete[]brain;
    // if (brain.ideas){
        std::string ideas[100];
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    // }
    // else
        // this->ideas = NULL;
}

Brain::Brain(const Brain& brain){
    std::cout << "Deep Copy Constructor Brain" << std::endl;
    deepCopy(brain);
}

Brain& Brain::operator=(Brain const &brain){
    if (this != &brain)
        deepCopy(brain);
    return (*this);
}
