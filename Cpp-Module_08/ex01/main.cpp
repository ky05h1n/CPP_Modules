/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:36:51 by enja              #+#    #+#             */
/*   Updated: 2023/10/02 10:18:12 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{       
    Span test(2);
    try{
        
        test.addNumber(0);

        std::cout << test.shortestSpan() << std::endl;
        std::cout << test.longestSpan() << std::endl;
    }
    
    // Span test(2);
    // try{
        
    //     test.addNumber(0);
    //     test.addNumber(0);
    //     test.addNumber(0);

    //     std::cout << test.shortestSpan() << std::endl;
    //     std::cout << test.longestSpan() << std::endl;
    // }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

// int main()
// {
//     Span test(5);

//     try{
//         test.addNumber(0);
//         test.addNumber(4);
//         test.addNumber(5);
//         test.addNumber(10);
//         test.addNumber(16);
//         std::cout << test.shortestSpan() << std::endl;
//         std::cout << test.longestSpan() << std::endl;
//     }
//     // try{
//     //         test.addNumber(12);
//     //         test.addNumber(98);
//     //         test.addNumber(45);
//     //         test.addNumber(91);
//     //         test.addNumber(26);
//     //         test.addNumber(78);
//     //         test.addNumber(30);
//     //         test.addNumber(40);
//     //         test.addNumber(16);
//     //         test.addNumber(500);
//     //         std::cout << test.shortestSpan() << std::endl;
//     //         std::cout << test.longestSpan() << std::endl;            
//     // }
//     catch(std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
// }

// int main() {
//     const int numElements = 30;
//     Span test(numElements);
//     try {
//             test.addNumber(42);
//             test.addNumber(123);
//             test.addNumber(987);
//             test.addNumber(555);
//             test.addNumber(777);
//             test.addNumber(321);
//             test.addNumber(999);
//             test.addNumber(888);
//             test.addNumber(666);
//             test.addNumber(4578);
//             test.addNumber(123456);
//             test.addNumber(789101);
//             test.addNumber(111213);
//             test.addNumber(141516);
//             test.addNumber(171819);
//             test.addNumber(202122);
//             test.addNumber(232425);
//             test.addNumber(262728);
//             test.addNumber(293031);
//             test.addNumber(323334);
//             test.addNumber(353637);
//             test.addNumber(383940);
//             test.addNumber(414243);
//             test.addNumber(444546);
//             test.addNumber(474849);
//             test.addNumber(505152);
//             test.addNumber(535455);
//             test.addNumber(565758);
//             test.addNumber(595061);
//             test.addNumber(626364);
//         std::cout << test.shortestSpan() << std::endl;
//         }
//      catch (std::exception& e) {
//         std::cout << e.what() << std::endl;
//     }

// }
