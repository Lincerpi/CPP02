/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lincerpi <lincerpi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:07:15 by lincerpi          #+#    #+#             */
/*   Updated: 2021/07/07 19:06:48 by lincerpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{ 
	// std::cout << "Default constructor called" << std::endl; 
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const int value_int)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value_int << this->_fractionalBits;
}

Fixed::Fixed(const float value_float)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = (int)(roundf(value_float * (1 << this->_fractionalBits)));
}

Fixed::~Fixed()
{ 
	// std::cout << "Destructor called" << std::endl; 
}

Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = copy.getRawBits();
}

void	Fixed::operator = (const Fixed &op)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this == &op)
        return ;
    this->_fixedPointValue = op.getRawBits();
}

bool Fixed::operator > (const Fixed &op) const
{
	return (this->_fixedPointValue > op.getRawBits());
}

bool Fixed::operator < (const Fixed &op) const
{
	return (this->_fixedPointValue < op.getRawBits());
}

bool Fixed::operator >= (const Fixed &op) const
{
	return (this->_fixedPointValue >= op.getRawBits());
}

bool Fixed::operator <= (const Fixed &op) const
{
	return (this->_fixedPointValue <= op.getRawBits());
}

bool Fixed::operator == (const Fixed &op) const
{
	return (this->_fixedPointValue == op.getRawBits());
}

bool Fixed::operator != (const Fixed &op) const
{
	return (this->_fixedPointValue != op.getRawBits());
}

Fixed Fixed::operator + (const Fixed &op) const
{
	Fixed pd;
	pd.setRawBits(this->_fixedPointValue + op.getRawBits());
	return (pd);
}

Fixed Fixed::operator - (const Fixed &op) const
{
	Fixed pd;
	pd.setRawBits(this->_fixedPointValue - op.getRawBits());
	return (pd);
}

Fixed Fixed::operator * (const Fixed &op) const
{
	Fixed pd;
	pd.setRawBits((this->_fixedPointValue * op.getRawBits()) >> this->_fractionalBits);
	return (pd);
}

Fixed Fixed::operator / (const Fixed &op) const
{
	Fixed pd;
	pd.setRawBits((this->_fixedPointValue << this->_fixedPointValue) / op.getRawBits());
	return (pd);
}

Fixed	Fixed::operator ++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed	Fixed::operator ++()
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator --(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed	Fixed::operator --()
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed & Fixed::min(Fixed &x, Fixed &y)
{ return (x < y ? x : y); }

const Fixed & Fixed::min(const Fixed &x, const Fixed &y)
{ return (x < y ? x : y); }

Fixed & Fixed::max(Fixed &x, Fixed &y)
{ return (x > y ? x : y); }

const Fixed & Fixed::max(const Fixed &x, const Fixed &y)
{ return (x > y ? x : y); }

int	Fixed::getRawBits() const
{	
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue); 
}

void	Fixed::setRawBits(int const raw)
{	this->_fixedPointValue = raw; }

float	Fixed::toFloat() const
{	return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBits)); }

int		Fixed::toInt() const
{	return ((int)this->_fixedPointValue >> this->_fractionalBits); }

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}