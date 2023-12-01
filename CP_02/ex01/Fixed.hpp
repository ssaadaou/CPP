/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:08:20 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/01 16:50:00 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#pragma once
#include <iostream>
#include <string>

class Fixed
{
    private:
        int fixed_point;
        static const int fractional_bits = 8;
    public:
        Fixed ();
        Fixed (const int a);// takes int and It converts it to the corresponding fixed-point value
        Fixed (const float b);// takes float, It converts it to the corresponding fixed-point value.
        Fixed (const Fixed &other);
        ~Fixed ();
        Fixed& operator= (const Fixed &other);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);

        int	toInt(void) const;
	    float toFloat(void) const;
};  
