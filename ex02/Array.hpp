/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:41:05 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 11:41:30 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

// CLASS
template< typename T >
class Array
{
	public :
		Array (void);
		Array (unsigned int const n);
		Array (Array<T> const & src);
		~Array (void);

		Array & operator=(Array<T> const & rhs);
		T & operator[](unsigned int i) const;

		unsigned int size (void) const;

		class OutOfBounds : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

	private :
		unsigned int const _n;
		T * _arrayPtr;

};

#include "Array.tpp"

#endif
