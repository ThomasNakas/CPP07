/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:33:54 by tnakas            #+#    #+#             */
/*   Updated: 2025/02/25 14:53:38 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMP_HPP
#define TEMP_HPP

#include <iostream>
template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
};

template <typename T>
const T& min(const T& a, const T& b)
{
	return (a < b) ? a : b;
};

template <typename T>
const T& max(const T& a, const T& b)
{
	return (a > b) ? a : b;
};
#endif