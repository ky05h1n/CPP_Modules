/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:42:57 by enja              #+#    #+#             */
/*   Updated: 2023/09/05 16:48:23 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

struct Data{

    int IntVar;
    char c;
    double dlVar;
    
};




class Serializer{


                private:
                
                        Serializer();
                        ~Serializer();
                        Serializer(const Serializer& obj);
                        const Serializer& operator = (const Serializer& obj);

                public:


                        
                        static uintptr_t serialize(Data* ptr);
                        static Data* deserialize(uintptr_t raw);
};class Serializer{


                private:
                
                        Serializer();
                        ~Serializer();
                        Serializer(const Serializer& obj);
                        const Serializer& operator = (const Serializer& obj);

                public:


                        
                        static uintptr_t serialize(Data* ptr);
                        static Data* deserialize(uintptr_t raw);
};
                        
                        