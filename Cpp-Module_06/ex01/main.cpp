/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:22:38 by enja              #+#    #+#             */
/*   Updated: 2023/09/05 16:47:42 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data *ptr = new Data;
    ptr->IntVar = 5;
    ptr->c = 'c';
    ptr->dlVar = 3.1;
    
    std::cout << ptr << std::endl;

    std::cout << std::endl;
    std::cout << ptr->IntVar << " | " << ptr->c <<  " | " <<  ptr->dlVar << std::endl;
    
    std::cout << std::endl;
    uintptr_t bin_ptr = Serializer::serialize(ptr);
    
    std::cout << bin_ptr << std::endl;
    std::cout << reinterpret_cast<Data*>(bin_ptr) << std::endl;

    ptr = Serializer::deserialize(bin_ptr);

    std::cout << std::endl;
    std::cout << ptr->IntVar << " | " << ptr->c <<  " | " <<  ptr->dlVar << std::endl;

}