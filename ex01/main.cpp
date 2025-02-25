/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 22:15:33 by tnakas            #+#    #+#             */
/*   Updated: 2025/02/25 19:23:50 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	//Array of integers
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
	
	std::cout << "Original integer array: \n";
	iter(intArray, intArrayLength, printElement);
	std::cout << "\n";

	std::cout << "Doubled integer array: ";
	iter(intArray, intArrayLength, DoubleElement);
	iter(intArray, intArrayLength, printElement);
	std::cout << "\n";
	//Array of strings
	std::string strArray[] = {"Hello", "World", "Iter", "Template"};
	size_t strArrayLength = sizeof(strArray) / sizeof(strArray[0]);
	
 	std::cout << "Running printElement in the strings array: \n";
	iter(strArray, strArrayLength, printElement);
	std::cout << "\n";
	return 0;
	
}