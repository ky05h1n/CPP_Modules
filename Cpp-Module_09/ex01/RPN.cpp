/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 03:42:27 by enja              #+#    #+#             */
/*   Updated: 2023/10/05 04:55:16 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn(char **av)
{
    rpn = *av;
    std::string operators = "+*/-";
    for (int i = 0; rpn[i]; i++)
    {
        if (rpn[i] <= '0' || rpn[i] >= '9')
        {
            for(int n = 0; operators[n]; n++)
            {
                if (rpn[i] == operators[n])
                    continue;
                throw ParsError();
            }   
        }
    }
    std::cout << "every thing looks good " << std::endl;
}

Rpn::~Rpn(){
}

Rpn::Rpn(const Rpn& obj)
{
    *this = obj;
}

const Rpn& Rpn::operator = (const Rpn& obj)
{
    if (this != &obj)
    {
        this->rpn = obj.rpn;
        this->data = obj.data;  
    }
    return *this;
}

std::string Rpn::GetRpn()
{
    return rpn;
}
