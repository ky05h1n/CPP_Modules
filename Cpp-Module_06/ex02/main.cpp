/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:04:02 by enja              #+#    #+#             */
/*   Updated: 2023/09/06 12:35:47 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main()
{
    Base *ptr1;
    Base&  ptr2 = *generate();

    ptr1 = generate();
    identify(ptr1);
    identify(ptr2);

    delete ptr1;
    delete &ptr2;
}