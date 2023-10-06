/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:01:12 by enja              #+#    #+#             */
/*   Updated: 2023/10/06 14:34:05 by enja             ###   ########.fr       */
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

                    std::vector<int> vec;
                    std::deque<int> deq;
                    std::string     data;

            public:

                    PmergeMe(char **av);
                    ~PmergeMe();
                    PmergeMe(const PmergeMe& obj);
                    const PmergeMe& operator = (const PmergeMe& obj);

                    class ErrorException : public std::exception{};
};