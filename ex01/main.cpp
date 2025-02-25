/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 22:15:33 by tnakas            #+#    #+#             */
/*   Updated: 2025/02/26 00:40:58 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	//Array of integers
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
	
	std::cout << "Original integer array: \n";
	iter(intArray, intArrayLength, printElement<int>);
	std::cout << "\n";

	std::cout << "Doubled integer array: ";
	iter(intArray, intArrayLength, DoubleElement<int>);
	iter(intArray, intArrayLength, printElement<int>);
	std::cout << "\n";
	//Array of strings
	std::string strArray[] = {"Hello", "World", "Iter", "Template"};
	size_t strArrayLength = sizeof(strArray) / sizeof(strArray[0]);
	
 	std::cout << "Running printElement in the strings array: \n";
	iter(strArray, strArrayLength, printElement<std::string>);
	std::cout << "\n";
	return 0;
}

//ex01.cpp
//-------------begin---------------------------
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
//   int tab[] = { 0, 1, 2, 3, 4};
//   Awesome tab2[5];

//   iter(tab, 5, print<const int>);
//   iter(tab2, 5, print<Awesome>);

//   return 0;
// }
//-------------end---------------------------