/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temp.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:33:57 by tnakas            #+#    #+#             */
/*   Updated: 2025/02/25 14:39:50 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Temp.hpp"

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
