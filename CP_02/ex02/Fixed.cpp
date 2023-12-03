/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:08:24 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/02 17:45:43 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"


Fixed::Fixed()
{
    fixed_point = 0;
    std::cout << "constructor" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "destructor" << std::endl;
}

Fixed::Fixed(const int a)
{
    std::cout<< "int to fixed constructor called" << std::endl;
    this->fixed_point  = a << this->fractional_bits;//this reserves 8 bits for the fractional part
}

Fixed::Fixed(const float b)
{
    std::cout<< "float to fixed constructor called" << std::endl;
    this->fixed_point = roundf(b * (1 <<  this->fractional_bits));
}

Fixed::Fixed(const Fixed &other)// creates new object as a copy of an existing obj by copying value using ref 
{
    std::cout << "copy constructor" << std::endl;
    *this = other;//call the operator=()
}

Fixed&  Fixed::operator=(const Fixed &other) 
{
    std::cout << "copy assingment operator" << std::endl;
    if (this != &other)
    {
        this->fixed_point = other.fixed_point; 
    }
    return (*this);
}

void	Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}

int	Fixed::getRawBits(void) const
{
    return(fixed_point);
}

int	Fixed::toInt(void) const
{
    return(this->fixed_point >> this->fractional_bits);
}


float	Fixed::toFloat(void) const
{
    return ((float)(this->fixed_point) / (1 << this->fractional_bits));
}

std::ostream &operator<<(std::ostream &out_stream, const Fixed &obj)
{
    //cout is an instance of ostream(which is a base class of ofstream and cout itself) class and both connected by default
    out_stream << obj.toFloat();
    return (out_stream);
}

//overload

int Fixed::operator>(const Fixed &other)
{
    return (this->fixed_point > other.fixed_point);
}

int Fixed::operator<(const Fixed &other)
{
    return (this->fixed_point < other.fixed_point);
}

int Fixed::operator<=(const Fixed &other)
{
    return (this->fixed_point <= other.fixed_point);
}

int Fixed::operator>=(const Fixed &other)
{
    return (this->fixed_point >= other.fixed_point);
}

int Fixed::operator==(const Fixed &other)
{
    return (this->fixed_point == other.fixed_point);
}

int Fixed::operator!=(const Fixed &other)
{
    return (this->fixed_point != other.fixed_point);
}

float Fixed::operator+(const Fixed &other)
{
    return(this->toFloat() + other.toFloat());
}

float Fixed::operator-(const Fixed &other)
{
    return(this->toFloat() - other.toFloat());
}

float Fixed::operator*(const Fixed &other)
{
    return(this->toFloat() * other.toFloat());
}

float	Fixed::operator/(const Fixed &other)
{
    return(this->toFloat() / other.toFloat());
}

Fixed	Fixed::operator++()
{
	this->fixed_point++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->fixed_point--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->fixed_point++;
	return(tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->fixed_point--;
	return(tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if(a.fixed_point <= b.fixed_point)
		return (a);
	else
		return(b);	
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if(a.fixed_point >= b.fixed_point)
		return (a);
	else
		return(b);	
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if(a.fixed_point >= b.fixed_point)
		return (a);
	else
		return(b);	
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if(a.fixed_point <= b.fixed_point)
		return (a);
	else
		return(b);	
}


