/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:05:19 by tnakas            #+#    #+#             */
/*   Updated: 2025/02/25 18:01:29 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array/Array.hpp"

int main()
{
	try
	{
		//1: Testing default
		Array<int> arr1;
		std::cout << "Size of arra1: " << arr1.size() << "\n";
		//2: Testing constructor that you are giving size
		Array<int> arr2(5);
		std::cout << "Size of arr2: " << arr2.size() << "\n";
		//---> Adding some testing Values
		for (unsigned int i = 0; i < arr2.size(); i++)
			arr2[i] = i * 10;
		//3: Copy Constructor
		Array<int> arr3(arr2);
		std::cout << "Size of arr3 (copy of arr2): " << arr3.size() << "\n";
		//4: Assgnment operator
		Array<int> arr4;
		arr4 = arr2;
		for (unsigned int i = 0; i < arr4.size(); ++i)
			std::cout << "arr4[" << i << "] = " << arr4[i] << "\n"; 
		//5: out of bounds testing
		std::cout << arr2[10] << "\n";
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
	
}