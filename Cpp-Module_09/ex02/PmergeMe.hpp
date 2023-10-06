/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:01:12 by enja              #+#    #+#             */
/*   Updated: 2023/10/06 08:54:57 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <vector>
#include <deque>
#include <cstring>

class PmergeMe{


            private:

                    std::vector<int> vecmerge;
                    std::deque<int> deqmerge;
                    std::string     data;

            public:

                    PmergeMe(char **av);
                    ~PmergeMe();
                    PmergeMe(const PmergeMe& obj);
                    const PmergeMe& operator = (const PmergeMe& obj);
};