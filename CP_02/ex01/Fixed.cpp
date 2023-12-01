/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:08:24 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/01 16:58:58 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 5498;
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

int Fixed::toInt(void) const
{
    std::cout << "from fixed to int -> " << this->fixed_point << this->fractional_bits << std::endl;
    return(this->fixed_point << this->fractional_bits);
}

float Fixed::toFloat(void) const
{
    
}

int main()
{

    Fixed a;
    Fixed b( a );
  
    std::cout << a.getRawBits() << std::endl;
    std::cout << a.toInt() << std::endl;
    
    
}