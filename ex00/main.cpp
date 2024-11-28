/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:07:23 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/28 20:50:48 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"	

int main (void)
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	return 0;
}


// int main (void)
// {

// 	std::cout << "ALTERNATIVE MAIN" << std::endl;
// 	float a = 25.27;
// 	float b = 9998.71;
// 	std::cout << "Before swap:" << std::endl;
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	::swap(a, b);
// 	std::cout << "After swap:" << std::endl;
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
// 	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
// 	std::string c = "ABC";
// 	std::string d = "XYZ";
// 	std::cout << "Before swap:" << std::endl;
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	::swap(c, d);
// 	std::cout << "After swap:" << std::endl;
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
// 	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
// 	char e = '~';
// 	char f = '*';
// 	std::cout << "Before swap:" << std::endl;
// 	std::cout << "e = " << e << ", f = " << f << std::endl;
// 	::swap(e, f);
// 	std::cout << "After swap:" << std::endl;
// 	std::cout << "e = " << e << ", f = " << f << std::endl;
// 	std::cout << "min(c, d) = " << ::min(e, f) << std::endl;
// 	std::cout << "max(c, d) = " << ::max(e, f) << std::endl;
// 	return 0;
// }