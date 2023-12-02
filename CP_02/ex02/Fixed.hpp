/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:08:20 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/01 21:59:36 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<ctype.h>
#include <cstdlib>
#include <cmath>

class Fixed
{
    private:
        int fixed_point;//this always hold a binary representation of the FPN as an encoded form (not zeros and ones)
        static const int fractional_bits = 8;
    public:
        Fixed ();
        Fixed (const int a);// takes int and It converts it to the corresponding fixed-point value
        Fixed (const float b);// takes float, It converts it to the corresponding fixed-point value.
        Fixed (const Fixed &other);
        Fixed& operator= (const Fixed &other);
        // obj1 = obj2 = obj3... when we return a reference to an object it means we are chaining the changes into that obj
        ~Fixed ();

        //overload
        int operator> (const Fixed &other);//bool
        int operator< (const Fixed &other);//bool
        int operator>= (const Fixed &other);//bool
        int operator<= (const Fixed &other);//bool
        int operator== (const Fixed &other);//bool
        int operator!= (const Fixed &other);//bool
        float operator+ (const Fixed &other);//we canot chain the final value or changes
        float operator- (const Fixed &other);
        float operator* (const Fixed &other);
        float operator/ (const Fixed &other);
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        
        static Fixed& min(Fixed &a, Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);

        

        //overload
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int	toInt(void) const;
	    float toFloat(void) const;
}; 

std::ostream &operator<<(std::ostream &out_stream, const Fixed &obj);

