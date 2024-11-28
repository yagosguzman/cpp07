/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 23:11:53 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/28 23:43:34 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	std::string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	std::cout << "Array of std::strings content before:" << std::endl;
	iter(week, 7, print_content);
	iter(week, 7, add_42);
	std::cout << "\nAfter adding 42:" << std::endl;
	iter(week, 7, print_content);

	int numbers[10] = {3, 14, 15, 92, 65, 35, 89, 79, 32, 38};
	std::cout << "\nArray of int:" << std::endl;
	iter(numbers, 10, print_content);
	iter(numbers, 10, add_42);
	std::cout << "\nAfter adding 42:" << std::endl;
	iter(numbers, 10, print_content);

	return 0;
}