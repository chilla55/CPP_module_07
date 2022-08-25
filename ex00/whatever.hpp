/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:33:48 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 11:33:49 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T & a, T & b)
{
	T z = a;
	a = b;
	b = z;
	return ;
}

template <typename T>
T & max( T & x, T & y)
{
	return ( x > y ? x : y);
}

template <typename T>
T & min( T & x, T & y)
{
	return ( x < y ? x : y);
}
