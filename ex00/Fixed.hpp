/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:07:18 by lincerpi          #+#    #+#             */
/*   Updated: 2021/06/13 17:12:04 by lincerpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed;

class Fixed {
		int _fixedPointValue;
		static int const _fractionalBits;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &copy);
		//An assignation operator overload
		int	getRawBits() const;
		void	setRawBits(int const raw);
};

#endif