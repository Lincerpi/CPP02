/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:07:18 by lincerpi          #+#    #+#             */
/*   Updated: 2021/07/07 14:51:24 by lincerpi         ###   ########.fr       */
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
		int	getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};
		std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif