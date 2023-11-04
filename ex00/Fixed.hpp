/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:11:59 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/02 02:29:57 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	int numValue;
	static const int fractionalBits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &a);
		Fixed &operator = (const Fixed &a);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif