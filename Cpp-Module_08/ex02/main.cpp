/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:25:52 by enja              #+#    #+#             */
/*   Updated: 2023/10/03 10:00:37 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

// int main()
// {
//     MutantStack<int> obj1;
//     MutantStack<int> obj2;

//     for (int i = 0; i <= 5; i++)
//     {
//         obj1.push(i);
//     }
    
//     MutantStack<int>::iterator it = obj1.begin();
    
//     for (int i = 0; i <= 5; i ++)
//     {
//         std::cout << *it++ << std::endl;
//     }

//     obj2 = obj1;
//     sort(obj2.begin(), obj2.end(), std::greater<int>());
//     it = obj2.begin();
//     std::cout << "---=========================---" << std::endl;
//     for (int i = 0; i <= 5; i ++)
//     {
//         std::cout << *it++ << std::endl;
//     }
//     std::cout << "---=========================---" << std::endl;
//     std::cout << "fist stack : " << obj1.top() << " second stack : " <<  obj2.top() << std::endl;
//     for (int i = 0; i <= 4; i++)
//     {
//         obj1.pop();
//         obj2.pop();
//     }
//     std::cout << "---=========================---" << std::endl;
//     std::cout << "fist stack : " << obj1.top() << " second stack : " <<  obj2.top() << std::endl;
// }


// int main()
// {
//     std::list<int> mstack;
//     mstack.push_front(5);
//     mstack.push_front(17);
//     std::cout << *mstack.begin() << std::endl;
//     mstack.pop_front();
//     std::cout << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     mstack.push_back(0);

//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::list<int> s(mstack);
//     return 0;
// }