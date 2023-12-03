/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:14:54 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/02 15:56:21 by ssaadaou         ###   ########.fr       */
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

Fixed::Fixed(const Fixed &other)
{
    std::cout << "copy constructor" << std::endl;
    *this = other;
}

void Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
    return(fixed_point);
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "copy assingment operator" << std::endl;
    if (this != &other)
    {
        this->fixed_point = other.fixed_point;
    }
    return (*this);
}

