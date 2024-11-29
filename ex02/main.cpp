/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 01:19:27 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/29 14:37:15 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <iostream>

int main(void)
{
	try
	{
		std::cout << "*** Construction with NO parameter ***" << std::endl;
		Array<int> empty;
		std::cout << "Size of array: " << empty.size() << std::endl;

		for (unsigned int i = 0; i < empty.size(); i++)
			empty[i] = i + 42;
	
		std::cout << "\nLet's try to see the content of the array:" << std::endl;
		for (unsigned int i = 0; i < empty.size(); i++)
			std::cout << "Content of array in position " << i << ": " << empty[i] << std::endl;
		std::cout << "Unfortunately it's a size 0 array so there's nothing to check :(" << std::endl;
		std::cout << "\nNow let's try to access the position 1 of this array" << std::endl;
		std::cout << empty[1] << std::endl;
		std::cout << "\nNow let's try to access the position -1 of this array" << std::endl; // Comment the previous line to be able to try this
		std::cout << empty[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n---------------------------\n" << std::endl;
		std::cout << "*** Construction WITH parameter ***" << std::endl;
		Array<int> param(7);
		std::cout << "Size of array: " << param.size() << std::endl;

		for (unsigned int i = 0; i < param.size(); i++)
			param[i] = (i + 42) * i;
	
		std::cout << "\nLet's try to see the content of the array:" << std::endl;
		for (unsigned int i = 0; i < param.size(); i++)
			std::cout << "Content of array in position " << i << ": " << param[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n---------------------------\n" << std::endl;
		std::cout << "*** Testing parametrized array with size 0 ***" << std::endl;
		Array<double> doublearr(0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
		try
	{
		std::cout << "\n---------------------------\n" << std::endl;
		std::cout << "*** Testing copy constructor ***" << std::endl;
		Array<std::string> routine(3);
		std::cout << "Size of array: " << routine.size() << std::endl;
			routine[0] = "Eat";
			routine[1] = "Work";
			routine[2] = "Sleep";
		for (unsigned int i = 0; i < routine.size(); i++)
			std::cout << "Content of array in position " << i << ": " << routine[i] << std::endl;
		std::cout << std::endl;
		
		Array<std::string> copy(routine);
		for (unsigned int i = 0; i < copy.size(); i++)
			std::cout << "Content of array in position " << i << ": " << copy[i] << std::endl;
		
		std::cout << "\nIf we change manually our copy array, the original will remain the same, here's a test:\n" << std::endl;
		copy[1] = "Play";
		std::cout << "Content of COPY array in position " << 1 << ": " << copy[1] << std::endl;
		std::cout << "Content of OG array in position " << 1 << ": " << routine[1] << std::endl;
		std::cout << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
		try
	{
		std::cout << "\n---------------------------\n" << std::endl;
		std::cout << "*** Testing assignment operator '=' ***" << std::endl;
		Array<std::string> podium(3);
			podium[0] = "Gold";
			podium[1] = "Silver";
			podium[2] = "Bronze";
		for (unsigned int i = 0; i < podium.size(); i++)
			std::cout << "Content of array in position " << i << ": " << podium[i] << std::endl;
		std::cout << std::endl;
		
		Array<std::string> position(3);
			position[0] = "First";
			position[1] = "Second";
			position[2] = "Third";
		for (unsigned int i = 0; i < position.size(); i++)
			std::cout << "Content of array in position " << i << ": " << position[i] << std::endl;
		std::cout << std::endl;
		podium = position;
		std::cout << "\nLet's see the content of the first array again:\n" << std::endl;
		for (unsigned int i = 0; i < podium.size(); i++)
			std::cout << "Content of array in position " << i << ": " << podium[i] << std::endl;
		std::cout << std::endl;

		std::cout << "Last test: assign to a size 0 array a non-size 0 array:" << std::endl;
		Array<std::string> empty;
		empty = position;
		std::cout << "\nContent of the initial empty array:" << std::endl;
		for (unsigned int i = 0; i < empty.size(); i++)
			std::cout << "Content of array in position " << i << ": " << empty[i] << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}