/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:11:59 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/04 14:37:05 by jadithya         ###   ########.fr       */
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
		~Fixed();
		Fixed(const Fixed &a);
		Fixed &operator = (const Fixed &a);
		Fixed(const int n);
		Fixed(const float n);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator << (std::ostream &obj, const Fixed f);

#endif