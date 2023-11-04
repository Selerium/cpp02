/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:43:37 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/04 18:02:15 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	Fixed const x;
	Fixed const y;

	public:
		Point();
		Point(const float x, const float y);
		Point(Point &p);
		Point &operator = (const Point &p);
		~Point();
	
		float getXFloat() const;
		float getYFloat() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif