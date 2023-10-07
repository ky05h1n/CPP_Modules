/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:01:12 by enja              #+#    #+#             */
/*   Updated: 2023/10/07 19:36:32 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <vector>
#include <deque>
#include <cstring>
#include <algorithm>

class PmergeMe{


            private:

                    std::vector<int>                    vec;
                    std::deque<int>                     deq;
                    std::string                         data;
                    int                                 hold;
                    std::vector<std::pair<int, int> >   VecArray;
                    std::deque<std::pair<int, int> >    DeqArray;
                    std::vector<int>                    largestvec;
                    std::vector<int>                    smallestvec;
                    std::deque<int>                     largestdeq;
                    std::deque<int>                     smallestdeq;
                    bool                                sig;

            public:

                    PmergeMe(char **av);
                    ~PmergeMe();
                    PmergeMe(const PmergeMe& obj);
                    const PmergeMe& operator = (const PmergeMe& obj);

                    class ErrorException : public std::exception{};
                    void    VectorSort();
                    void    DequeSort();
};