/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 22:15:33 by tnakas            #+#    #+#             */
/*   Updated: 2025/02/25 18:33:14 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever/whatever.hpp"

int main()
{
	//int tests
	int a = 2;
	int b = 3;
	//More readable additions
	std::cout << "---->Before Swap<-----\n";
	std::cout << " a = " << a << ", b = " << b << "\n";
	::swap(a, b);
	std::cout << "---->After Swap<-----\n";
	std::cout << " a = " << a << ", b = " << b << "\n";
	std::cout << "min(a, b) = " << ::min(a, b) << "\n";
	std::cout << "max(a, b) = " << ::max(a, b) << "\n";

	//string tests
	std::string c = "chaine1";
	std::string d = "chaine2";
	//More readable additions
	std::cout << "---->Before Swap<-----\n";
	std::cout << " c = " << c << ", d = " << d << "\n";
	::swap(c, d);
	std::cout << "---->After Swap<-----\n";
	std::cout << " c = " << c << ", d = " << d << "\n";
	std::cout << "min(c, d) = " << ::min(c, d) << "\n";
	std::cout << "max(c, d) = " << ::max(c, d) << "\n";
	
	return 0;
	
}