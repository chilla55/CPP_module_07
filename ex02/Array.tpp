/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:41:59 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 11:42:22 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


template<typename T>
Array<T>::Array (void): _n(0), _arrayPtr(NULL)
{
	std::cout << "Default Array Constructor called" << std::endl;
	this->_arrayPtr = new T[_n]();
	return ;
}

template <typename T>
Array<T>::Array(unsigned int const n): _n(n), _arrayPtr(NULL)
{
	this->_arrayPtr = new T[n]();
	std::cout << "Parametric Array Constructor called" << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(Array<T> const & src): _n(src.size()), _arrayPtr(NULL)
{
	std::cout << "Copy Array Constructor called" << std::endl;
	this->_arrayPtr = new T[this->_n]();
	for (unsigned int i = 0; i < this->_n; i ++)
		this->_arrayPtr[i] = src._arrayPtr[i];
	return ;
}

template <typename T>
Array<T>::~Array(void)
{
	if (this->_n > 0)
		delete [] this->_arrayPtr;
	std::cout << "Array Destructor Called" << std::endl;
	return ;
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
	std::cout << "Array Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->Array<T>::~Array();
		*this = Array(rhs);
	}

	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_n)
		throw Array::OutOfBounds();
	else
		return (this->_arrayPtr[i]);
}

template <typename T>
char const * Array<T>::OutOfBounds::what() const throw()
{
	return ("Index out of bounds.");
}

template <typename T>
unsigned int Array<T>::size (void) const
{
	return (this->_n);
}
