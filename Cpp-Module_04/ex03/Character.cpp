/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:40:44 by enja              #+#    #+#             */
/*   Updated: 2023/08/26 22:58:01 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
    this->name = name;
    std::cout << "Character Constructor egaged !" << std::endl;
    for(int i = 0; i < 4; i ++)
        ptr[i] = NULL;
}

const Character& Character::operator = (const Character& obj)
{
    this->~Character();
    if (this != &obj)
    {
        this->name = obj.name;
        for (int i = 0; i < 4; i++)
            this->ptr[i] = obj.ptr[i];
    }
    return *this;
}

Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
    {
        delete this->ptr[i];
    }
    std::cout << "Character Destructor egaged !" << std::endl;
}

Character::Character(const Character& obj)
{
    *this = obj;
     std::cout << "Character Copy Constructor egaged !" << std::endl;
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    { 
        if (ptr[i] == NULL)
        {
            ptr[i] = m;
            return ;
        }
    }            
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 4)
        if (ptr[idx])
        {
            ptr[idx] = NULL;
        }
    return;
}

void Character::use(int idx, ICharacter& target)
{
    if (ptr[idx] && idx >= 0 && idx <= 4)
    {
        ptr[idx]->use(target);
    }
    
}

AMateria* Character::Tosave(int i)
{
    return ptr[i];
}
