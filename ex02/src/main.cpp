/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:05:19 by tnakas            #+#    #+#             */
/*   Updated: 2025/02/25 18:55:49 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array/Array.hpp"


#define MAX_VAL 750
int main()
{
	// try
	// {
	// 	//1: Testing default -- empty array
	// 	Array<int> arr1;
	// 	std::cout << "Size of arra1: " << arr1.size() << "\n";
	// 	//2: Testing constructor that you are giving size
	// 	Array<int> arr2(5);
	// 	std::cout << "Size of arr2: " << arr2.size() << "\n";
	// 	//---> Adding some testing Values
	// 	for (unsigned int i = 0; i < arr2.size(); i++)
	// 		arr2[i] = i * 10;
	// 	//3: Copy Constructor
	// 	Array<int> arr3(arr2);
	// 	std::cout << "Size of arr3 (copy of arr2): " << arr3.size() << "\n";
	// 	//4: Assgnment operator
	// 	Array<int> arr4;
	// 	arr4 = arr2;
	// 	std::cout << "Size of arr4 (assgned from arr2): " << arr4.size() << "\n";
	// 	for (unsigned int i = 0; i < arr4.size(); ++i)
	// 		std::cout << "arr4[" << i << "] = " << arr4[i] << "\n"; 
	// 	// 5: out of bounds testing throwing error expected
	// 	std::cout << arr2[10] << "\n";
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	//==============main.cpp====================
	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	std::cout << "/===========NUMBERS===========\n";
	for (unsigned int i = 0; i < 10; ++i)
		std::cout << "numbers[" << i << "] = " << numbers[i] << "\n";
	std::cout << "/===========MIRROR===========\n";
	for (unsigned int i = 0; i < 10 ; ++i)
		std::cout << "mirror[" << i << "] = " << mirror[i] << "\n";
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	//catching one error here
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	//catching one error here
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	//==========================================
	return 0;
	
}