/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:51:56 by enja              #+#    #+#             */
/*   Updated: 2023/10/11 15:48:53 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
    //std::cout << "Base Destructor" << std::endl;
}

Base * generate(void)
{
    Base *ptr;
    static int i = 100000;

   srand(time(0));

    if ((rand() + i) % 3 == 0)
        ptr = new A;
    else if ((rand() + i) % 3 == 0)
        ptr = new B;
    else
        ptr = new C;
    if (!ptr)
        exit(EXIT_FAILURE);
    i += 100000;
    return ptr;
}

void identify(Base* p)
{
    Base *ptr;
    
    if ((ptr = dynamic_cast<A*>(p)))
        std::cout << "A" << std::endl;
    
    else if ((ptr = dynamic_cast<B*>(p)))
        std::cout << "B" << std::endl;
    
    else if ((ptr = dynamic_cast<C*>(p)))
        std::cout << "C" << std::endl;

    else
        std::cout << "The data type does not exist" << std::endl;
}

void identify(Base& p)
{
    
    try{
            Base& ptr = dynamic_cast<A&>(p);
            std::cout << "A" << std::endl;(void)ptr;
            }
            catch(std::exception &e)
            {
                try{
                        Base& ptr = dynamic_cast<B&>(p);(void)ptr;
                        std::cout << "B" << std::endl;
                        }
                        catch (std::exception &e)
                        {
                            try{
                                    Base& ptr = dynamic_cast<C&>(p);(void)ptr;
                                    std::cout << "C" << std::endl;
                                    }
                                    catch (std::exception &e)
                                    {
                                        std::cout << e.what() << std::endl;
                                    }
                        }
            }
}