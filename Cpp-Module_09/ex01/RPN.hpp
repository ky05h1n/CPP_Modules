/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 03:42:35 by enja              #+#    #+#             */
/*   Updated: 2023/10/05 04:55:30 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class Rpn{

            private:

                    std::string rpn;
                    std::stack<int> data;
            
            public:

                    Rpn(char **av);
                    ~Rpn();
                    Rpn(const Rpn& obj);
                    const Rpn& operator = (const Rpn& obj);

                    class ParsError : public std::exception{
                    };
                    std::string GetRpn();
                    void    CheckData(std::string& rpn);
};
