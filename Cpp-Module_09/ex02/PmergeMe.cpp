/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:01:14 by enja              #+#    #+#             */
/*   Updated: 2023/10/06 09:50:40 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av)
{
    for (int i = 0; av[i]; i++)
        data += av[i];
    std::cout << data << std::endl;
}

PmergeMe::~PmergeMe(){ 
}

PmergeMe::PmergeMe(const PmergeMe& obj)
{
    *this = obj;
}

const PmergeMe& PmergeMe::operator = (const PmergeMe& obj)
{
    if (this != &obj)
    {
        this->vecmerge = obj.vecmerge;
        this->deqmerge = obj.deqmerge;
    }
    return *this;
}