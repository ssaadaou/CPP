/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:14:54 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/01 04:29:10 by ssaadaou         ###   ########.fr       */
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

Fixed::Fixed(const Fixed &other)// creates new object as a copy of an existing obj by copying value using ref 
{
    std::cout << "copy constructor" << std::endl;
    *this = other;//call the operator=()
}

void Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
    return(fixed_point);
}

Fixed& Fixed::operator=(const Fixed &other) // It's used to copy the value from one object to another existing object
{
    std::cout << "copy assingment operator" << std::endl;
    if (this != &other) //protecting self by comparing the address of the current obj and with & of other
    {
        this->fixed_point = other.fixed_point; // assign the value of fxp from other to the curr obj
    }
    return (*this);
}
//this is a ptr to a current obj 'fixed', when using *this we re deferencing it so we can get the obj itself 
