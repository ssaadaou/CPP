/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:08:24 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/02 17:45:05 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"
#include <iostream>

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
    this->fixed_point  = a << this->fractional_bits;//this reserves 8 bits for the fractional part
}

Fixed::Fixed(const float b)
{
    this->fixed_point = roundf(b * (1 <<  this->fractional_bits));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "copy constructor" << std::endl;
    *this = other; //call the operator=()
}

Fixed   &Fixed::operator=(const Fixed &other) 
{
    std::cout << "copy assingment operator" << std::endl;
    if (this != &other)
    {
        this->fixed_point = other.fixed_point; 
    }
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
    return(fixed_point);
}

int Fixed::toInt(void) const
{
    return(this->fixed_point >> this->fractional_bits);
}


float Fixed::toFloat(void) const
{
    return ((float)(this->fixed_point) / (1 << this->fractional_bits));
}

std::ostream &operator<<(std::ostream &out_stream, const Fixed &obj)
{
    out_stream << obj.toFloat();
    return (out_stream);
}


int main()
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
}