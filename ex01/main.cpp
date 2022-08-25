/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:05:36 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/25 11:38:13 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "iter.hpp"

int main( void )
{
	int		i[] = {1, 4, 6, 7, 22};
	float	f[] = { 4.2, 5.3, 6.4 , 1.1 , 16.4};
	char	c[] = { 'A', 'a', 'B', 'b', 'C'};
	std::cout << i[0] << " , " << i[1] << " , " << i[2] << " , " << i[3] << " , " << i[4] << std::endl;
	std::cout << f[0] << " , " << f[1] << " , " << f[2] << " , " << f[3] << " , " << f[4] << std::endl;
	std::cout << c[0] << " , " << c[1] << " , " << c[2] << " , " << c[3] << " , " << c[4] << std::endl << std::endl;

	iter(i, 5, plusPlus<int>);
	iter(f, 5, plusPlus<float>);
	iter(c, 5, plusPlus<char>);
	std::cout << i[0] << " , " << i[1] << " , " << i[2] << " , " << i[3] << " , " << i[4] << std::endl;
	std::cout << f[0] << " , " << f[1] << " , " << f[2] << " , " << f[3] << " , " << f[4] << std::endl;
	std::cout << c[0] << " , " << c[1] << " , " << c[2] << " , " << c[3] << " , " << c[4] << std::endl;

	iter(i, 5, swap<int>);
	iter(f, 5, swap<float>);
	iter(c, 5, swap<char>);
	std::cout << i[0] << " , " << i[1] << " , " << i[2] << " , " << i[3] << " , " << i[4] << std::endl;
	std::cout << f[0] << " , " << f[1] << " , " << f[2] << " , " << f[3] << " , " << f[4] << std::endl;
	std::cout << c[0] << " , " << c[1] << " , " << c[2] << " , " << c[3] << " , " << c[4] << std::endl;
	return 0;
}
