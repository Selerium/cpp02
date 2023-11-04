/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:11:59 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/04 17:10:51 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	int numValue;
	static const int fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &a);
		Fixed(const int n);
		Fixed(const float n);
		Fixed &operator = (Fixed &a);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		bool operator > (const Fixed &a);
		bool operator < (const Fixed &a);
		bool operator >= (const Fixed &a);
		bool operator <= (const Fixed &a);
		bool operator == (const Fixed &a);
		bool operator != (const Fixed &a);
		
		float operator + (const Fixed &a);
		float operator - (const Fixed &a);
		float operator * (const Fixed &a);
		float operator / (const Fixed &a);

		float operator ++();
		float operator ++(int);

		static Fixed min (const Fixed &a, const Fixed &b);
		static Fixed max (const Fixed &a, const Fixed &b);
		static Fixed min (Fixed &a, Fixed &b);
		static Fixed max (Fixed &a, Fixed &b);
};

std::ostream &operator << (std::ostream &obj, const Fixed f);

#endif