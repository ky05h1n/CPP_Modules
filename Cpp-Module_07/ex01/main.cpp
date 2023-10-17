/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:56:56 by enja              #+#    #+#             */
/*   Updated: 2023/10/13 22:44:54 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    
    int arr[] = {1 , 2 , 3, 4};
    iter(arr,4, func<int>);
    std::cout << "\n\n";
     
    char ptr[] = {'a', 'b', 'c'};
    iter(ptr,3, func<char>);
    std::cout << "\n\n";
    
    std::string array[] = {"42 ", "1337  ", "it ", "is ", "what ", "it ", "is"};
    iter(array,7, func<std::string>);
}
// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }