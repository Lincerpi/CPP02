/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:07:18 by lincerpi          #+#    #+#             */
/*   Updated: 2021/07/07 18:12:11 by lincerpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed;

class Fixed {
		int _fixedPointValue;
		static int const _fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int value_int);
		Fixed(const float value_float);
		~Fixed();
		Fixed(const Fixed& copy);
		void operator = (const Fixed &op);
		bool operator > (const Fixed &op) const;
		bool operator < (const Fixed &op) const;
		bool operator >= (const Fixed &op) const;
		bool operator <= (const Fixed &op) const;
		bool operator == (const Fixed &op) const;
		bool operator != (const Fixed &op) const;
		Fixed operator + (const Fixed &op) const;
		Fixed operator - (const Fixed &op) const;
		Fixed operator * (const Fixed &op) const;
		Fixed operator / (const Fixed &op) const;
		Fixed operator ++(int);
		Fixed operator ++();
		Fixed operator --(int);
		Fixed operator --();
		static Fixed &min(Fixed &u, Fixed &v);
        const static Fixed &min(const Fixed &u, const Fixed &v);
        static Fixed &max(Fixed &u, Fixed &v);
        const static Fixed &max(const Fixed &u, const Fixed &v);
		int	getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};
		std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif