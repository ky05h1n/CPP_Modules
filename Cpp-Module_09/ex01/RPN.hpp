/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 03:42:35 by enja              #+#    #+#             */
/*   Updated: 2023/10/05 10:58:01 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <cstdlib>

class Rpn{

            private:

                    std::string rpn;
                    std::stack<int> data;
                    std::string operators;
            
            public:

                    Rpn(char **av);
                    ~Rpn();
                    Rpn(const Rpn& obj);
                    const Rpn& operator = (const Rpn& obj);

                    class ParsError : public std::exception{
                    };
                    class OperationError : public std::exception{  
                    };
                    std::string GetRpn();
                    void    RpnCalculation();
};