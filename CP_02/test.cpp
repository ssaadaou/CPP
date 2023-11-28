/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:14:54 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/28 22:28:22 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

Fixed::Fixed()
{
    std::cout << "constructor" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "destructor" << std::endl;
}

Fixed::Fixed(const Fixed &other)//i = 4; ff = "jamal"
{
    std::cout << "copy constructor" << std::endl;
    *this = other;//call the operator=()
}

int Fixed::getRawBits(void) const
{
    
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "copy assingment operator" << std::endl;
    if (this != &other)//protecting self
    {
        this->x = other.x;
        this->y = other.y;
    }
    return (*this);
}