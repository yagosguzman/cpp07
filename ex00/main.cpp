/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:07:23 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/28 18:09:49 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"	

void swap(T v1, T v2)
{
	T aux;

	aux == v1;
	v1 == v2;
	v2 == aux;
}

T min(T v1, T v2)
{
	if (v1 == v2)
		return v2;
	else
		return v1 > v2 ? v2 : v1;
}

T max(T v1, T v2)
{
	if (v1 == v2)
		return v2;
	else
		return v1 > v2 ? v1 : v2;
}