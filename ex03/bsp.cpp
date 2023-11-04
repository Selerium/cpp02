/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:50:30 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/04 18:31:43 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

float planeCheck(Point const &a, Point const &b, Point const &c) {
	return ((a.getXFloat() - c.getXFloat()) * (b.getYFloat() - c.getYFloat())
			- (b.getXFloat() - c.getXFloat()) * (a.getYFloat() - c.getYFloat()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	bool checkA, checkB;

	checkA = planeCheck(point, a, b) > 0 || planeCheck(point, b, c) > 0 || planeCheck(point, c, a) > 0;
	checkB = planeCheck(point, a, b) < 0 || planeCheck(point, b, c) < 0 || planeCheck(point, c, a) < 0;

	std::cout << a.getXFloat() << "," << a.getYFloat()
		 << " " << b.getXFloat() << "," << b.getYFloat()
		 << " " << c.getXFloat() << "," << c.getYFloat() << std::endl;
	std::cout << checkA << " " << checkB << std::endl;

	return !(checkA && checkB);
}