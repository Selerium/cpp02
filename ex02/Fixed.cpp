/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:16:05 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/04 16:09:29 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : numValue(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a) : numValue(a.getRawBits()) {
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &a) {
	// std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &a) {
		this->numValue = a.getRawBits();
	}
	return (*this);
}

Fixed::Fixed(const int n) {
	// std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n << this->fractionalBits);
}

Fixed::Fixed(const float n) {
	// std::cout << "Float constructor called" << std::endl;
	this->setRawBits(n * (1 << this->fractionalBits));
}

float Fixed::toFloat(void) const {
	return ((float) this->getRawBits() / (1 << this->fractionalBits));
}

int Fixed::toInt(void) const {
	return (roundf(this->getRawBits() >> this->fractionalBits));
}

int	Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->numValue);
}

void Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->numValue = raw;
}

std::ostream &operator << (std::ostream &obj, const Fixed f) {
	obj << f.toFloat();
	return (obj);
}

bool Fixed::operator > (const Fixed &a) {
	return (this->toFloat() > a.toFloat());
}

bool Fixed::operator < (const Fixed &a) {
	return (this->toFloat() < a.toFloat());
}

bool Fixed::operator >= (const Fixed &a) {
	return (this->toFloat() >= a.toFloat());
}

bool Fixed::operator <= (const Fixed &a) {
	return (this->toFloat() <= a.toFloat());
}

bool Fixed::operator == (const Fixed &a) {
	return (this->toFloat() == a.toFloat());
}

bool Fixed::operator != (const Fixed &a) {
	return (this->toFloat() != a.toFloat());
}

float Fixed::operator + (const Fixed &a) {
	return (this->toFloat() + a. toFloat());
}

float Fixed::operator - (const Fixed &a) {
	return (this->toFloat() - a. toFloat());
}

float Fixed::operator * (const Fixed &a) {
	return (this->toFloat() * a. toFloat());
}

float Fixed::operator / (const Fixed &a) {
	return (this->toFloat() / a. toFloat());
}

float Fixed::operator ++ () {
	this->setRawBits(this->getRawBits() + 1);
	return (this->toFloat());
}

float Fixed::operator ++ (int) {
	float temp;
	temp = this->toFloat();
	this->setRawBits(this->getRawBits() + 1);
	return (temp);
}

Fixed Fixed::min (const Fixed &a, const Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed Fixed::max (const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

Fixed Fixed::min (Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed Fixed::max (Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}