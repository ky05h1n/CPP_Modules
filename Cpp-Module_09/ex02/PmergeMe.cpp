/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:01:14 by enja              #+#    #+#             */
/*   Updated: 2023/10/06 14:44:18 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av)
{
    for (int i = 0; av[i]; i++)
        data += av[i];
    for (int i = 0; i < (int)data.size(); i++)
    {
        if (data[i] < '0' || data[i] > '9')
            throw ErrorException();
    }
    for (int i = 0; av[i]; i++)
    {
        if (!strcmp(av[i], ""))
            throw ErrorException();
        int num = atoi(av[i]);
        if (std::find(vec.begin(), vec.end(), num) == vec.end() ||
         std::find(deq.begin(), deq.end(), num) == deq.end())
         {
            vec.push_back(num);
            deq.push_back(num);
         }
         else
            throw ErrorException();
    }
}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe& obj)
{
    *this = obj;
}

const PmergeMe& PmergeMe::operator = (const PmergeMe& obj)
{
    if (this != &obj)
    {
        this->vec = obj.vec;
        this->deq = obj.deq;
        this->data = obj.data;
    }
    return *this;
}
