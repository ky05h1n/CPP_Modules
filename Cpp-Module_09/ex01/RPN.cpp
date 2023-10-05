/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 03:42:27 by enja              #+#    #+#             */
/*   Updated: 2023/10/05 12:50:12 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn(char **av)
{
    operators = " +*/-";
    rpn = *av;
    for (int i = 0; rpn[i]; i++)
    {
        if (rpn[i] < '0' || rpn[i] > '9')
        {
            if (operators.find(rpn[i]) != std::string::npos)
                    continue;
            throw ParsError();
        }
    }
    rpn.erase(std::remove(rpn.begin(), rpn.end(), ' '), rpn.end());
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
        this->operators = obj.operators;
    }
    return *this;
}

std::string Rpn::GetRpn()
{
    return rpn;
}

void    Rpn::RpnCalculation()
{
    for (int i = 0; i < (int)rpn.size(); i++)
    {
        if (rpn[i] >= '0' && rpn[i] <= '9')
        {
            int num = rpn[i] - '0';
            data.push(num);
        }
        else
        {
            if (data.size() == 1 || data.empty())
                throw OperationError();

            int temp1;
            int temp2;

                if (data.empty() != true)
                {
                    temp1 = (int)data.top();
                    data.pop();
                    
                        if (data.empty() != true)
                        {
                            temp2 = (int)data.top();
                            data.pop();
                            if (rpn[i] == '+')
                                temp2 += temp1;
                            else if (rpn[i] == '-')
                                temp2 -= temp1;
                            else if (rpn[i] == '*')
                                temp2 *= temp1;
                            else
                                temp2 /= temp1;
    
                            data.push(temp2);
                        }
                }
        }
    }
    if (data.size() == 1)
        std::cout << data.top() << std::endl;
    else 
        throw OperationError();
}
