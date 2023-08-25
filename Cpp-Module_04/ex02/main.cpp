/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:49:29 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 20:14:44 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main()
{
        Cat obj;
        Animal *ptr = &obj;

        ptr->makeSound();


        Dog obj2;
        ptr = &obj2;
        ptr->makeSound();


        //if u try to creat a blueprint from Animal its a error

        //Animal obj;

}