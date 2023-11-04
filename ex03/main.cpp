/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:20:49 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/04 18:35:43 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void ) {
	// Point a(0, 0);
	// Point b(3, 0);
	// Point c(0, 3);
	Point a(50, 0);
	Point b(24, 5);
	Point c(52, 40);

	Point point(36.002f, 19.56f);
	std::cout << (bsp(a, b, c, point) == 1 ? "It belongs in the triangle" : "It is not part of the triangle") 
		<< std::endl;
}