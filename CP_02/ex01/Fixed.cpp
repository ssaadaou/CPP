/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:08:24 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/29 21:41:31 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

