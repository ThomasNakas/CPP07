/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:12:17 by tnakas            #+#    #+#             */
/*   Updated: 2025/02/25 15:32:59 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array, size_t length, void(*func)(T&))
{
	for (size_t i = 0; i < length; ++i)
		func(array[i]);
}

template <typename T>
void printElement(T& element)
{
	std::cout << element << " ";
}

template <typename T>

void DoubleElement(T& element)
{
	element *= 2;
}
#endif