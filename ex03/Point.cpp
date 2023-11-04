/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:30:09 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/04 18:11:13 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {
}

Point::Point(const float x, const float y) : x(x), y(y) {
}

Point::Point(Point &b) : x(b.x), y(b.y) {
}

Point &Point::operator = (const Point &p) {
	if (this != &p)
		return (*this);
	return (*this);
}

Point::~Point() {
}

float Point::getXFloat() const {
	return (this->x.toFloat());
}

float Point::getYFloat() const {
	return (this->y.toFloat());
}