/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:01:14 by enja              #+#    #+#             */
/*   Updated: 2023/10/07 19:37:53 by enja             ###   ########.fr       */
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
        if (std::find(vec.begin(), vec.end(), num) == vec.end())
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

void    PmergeMe::VectorSort()
{
    sig = false;
    if (vec.size() % 2 != 0)
    {
        hold = vec.back();
        vec.pop_back();
        sig = true;
    }
    int n = 0;
    for (int i = 0; i < (int)vec.size(); i+=2)
    {
        VecArray.push_back(std::make_pair(vec[i], vec[i + 1]));
        if (VecArray[n].first > VecArray[n].second)
            std::swap(VecArray[n].first, VecArray[n].second);
        smallestvec.push_back(VecArray[n].first);
        largestvec.push_back(VecArray[n].second); n++;
    }
    std::sort(largestvec.begin(), largestvec.end());

    for (int i = 0; i < (int)smallestvec.size(); i ++)
    {
            std::vector<int>::iterator pos = std::lower_bound(largestvec.begin(), largestvec.end(), smallestvec[i]);
            largestvec.insert(pos, smallestvec[i]);
    }
    if (sig)
    {
        std::vector<int>::iterator pos = std::lower_bound(largestvec.begin(), largestvec.end(), hold);
        largestvec.insert(pos, hold);
    }

    for (int i = 0; i < (int)largestvec.size(); i ++)
    {
        std::cout << largestvec[i] << std::endl;
    }
}

void    PmergeMe::DequeSort()
{
    sig = false;
    if (deq.size() % 2 != 0)
    {
        hold = deq.back();
        deq.pop_back();
        sig = true;
    }
    int n = 0;
    for (int i = 0; i < (int)vec.size(); i+=2)
    {
        DeqArray.push_back(std::make_pair(deq[i], deq[i + 1]));
        if (DeqArray[n].first > DeqArray[n].second)
            std::swap(DeqArray[n].first, DeqArray[n].second);
        smallestdeq.push_back(DeqArray[n].first);
        largestdeq.push_back(DeqArray[n].second); n++;
    }
    std::sort(largestdeq.begin(), largestdeq.end());

    for (int i = 0; i < (int)smallestdeq.size(); i ++)
    {
            std::deque<int>::iterator pos = std::lower_bound(largestdeq.begin(), largestdeq.end(), smallestdeq[i]);
            largestdeq.insert(pos, smallestdeq[i]);
    }
    if (sig)
    {
        std::deque<int>::iterator pos = std::lower_bound(largestdeq.begin(), largestdeq.end(), hold);
        largestdeq.insert(pos, hold);
    }

    for (int i = 0; i < (int)largestdeq.size(); i ++)
    {
        std::cout << largestdeq[i] << std::endl;
    }
}