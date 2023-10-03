/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:25:50 by enja              #+#    #+#             */
/*   Updated: 2023/10/03 09:44:40 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <list>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>{


			public:
					
					typedef typename std::stack<T>::container_type::iterator iterator;
					typedef typename std::stack<T>::container_type::reverse_iterator reviter;

					MutantStack() : std::stack<T>(){}
					~MutantStack(){}
					MutantStack(const MutantStack& obj)
					{
						*this = obj;
					}
					const MutantStack& operator = (const MutantStack& obj)
					{
						this->c = obj.c;
						return *this;
					}


                    iterator begin()
					{
						return iterator(this->c.begin());
					}
                    iterator end()
					{
						return iterator(this->c.end());
					}
					reviter revbegin()
					{
						return reviter(this->c.rbegin());
					}
					reviter revend()
					{
						return reviter(this->c.rend());
					}
};
