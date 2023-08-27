/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:49:29 by enja              #+#    #+#             */
/*   Updated: 2023/08/26 23:03:28 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    Animal* arr[4];

    for (int i = 0; i < 2 ; i++)
        arr[i] = new Cat;

    std::cout << std::endl;
    
    for (int i = 2; i < 4; i++)
        arr[i] = new Dog;

    std::cout << std::endl;

    for (int i = 0; i < 2; i++)
        delete arr[i];

    std::cout << std::endl;

    for (int i = 2; i < 4; i++)
        delete arr[i];
    return 0;
}

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();



// delete j;//should not create a leak
// delete i;

// }