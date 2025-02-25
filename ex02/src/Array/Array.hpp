/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:43:39 by tnakas            #+#    #+#             */
/*   Updated: 2025/02/25 18:07:35 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include  <stdexcept>

template <typename T>
class Array
{
	T* _array;
	unsigned int _size;
	
	public:
		Array() : _array(nullptr), _size(0){};
		Array(unsigned int n) : _array(new T[n]()), _size(n){};
		Array (const Array& other) : _array(nullptr), _size(0){*this = other;};
		Array& operator=(const Array& other)
		{
			if (this != &other)
			{
				delete[] _array;
				_size = other._size;
				_array = new T[_size];
				
				for (unsigned int i = 0; i < _size; ++i)
					_array[i] = other._array[i];
			}
			return *this;
		};
		~Array(){delete[] _array;};
		T& operator[](unsigned int index)
		{
			if (index >= _size)
			throw std::out_of_range("Index out of bounds");
			return _array[index];
		}
		unsigned int size() const
		{
			return _size;
		}
};
#endif