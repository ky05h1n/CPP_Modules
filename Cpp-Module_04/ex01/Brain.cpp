/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:13:16 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 16:12:47 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor egaged !" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brai Destructor egaged !" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    this->ideas = obj.ideas;
}

const Brain& Brain::operator = (const Brain& obj)
{
    if (this->ideas != obj.ideas)
        this->ideas = obj.ideas;
    return *this;
}