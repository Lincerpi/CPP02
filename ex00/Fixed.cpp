/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:07:15 by lincerpi          #+#    #+#             */
/*   Updated: 2021/06/14 11:09:24 by lincerpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{ 
	std::cout << "Default constructor called" << std::endl; 
	this->_fixedPointValue = 0;
}

Fixed::~Fixed()
{ std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = copy.getRawBits();
}

void	Fixed::operator = (const Fixed &op)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &op)
        return ;
    this->_fixedPointValue = op.getRawBits();
}

int	Fixed::getRawBits() const
{	
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue); 
}

void	Fixed::setRawBits(int const raw)
{	this->_fixedPointValue = raw; }