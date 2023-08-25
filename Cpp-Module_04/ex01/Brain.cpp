/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:13:16 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 18:20:15 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor egaged !" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor egaged !" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    *this = obj;
    std::cout << "Brain Copy Constructor egaged !" << std::endl;
}

const Brain& Brain::operator=(const Brain& obj)
{
    if (this->ideas != obj.ideas)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return *this;
}