/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:07:18 by lincerpi          #+#    #+#             */
/*   Updated: 2021/06/14 11:05:22 by lincerpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed;

class Fixed {
		int _fixedPointValue;
		static int const _fractionalBits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& copy);
		void operator = (const Fixed &op);
		int	getRawBits() const;
		void	setRawBits(int const raw);
};

#endif