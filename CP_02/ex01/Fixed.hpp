/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:08:20 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/29 21:12:19 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include <string>

class Fixed
{
    private:
        int fixed_point;
        static const int fractional_bits = 8;
    public:
        Fixed(const int a);
        Fixed(const float b);
        ~Fixed();
        Fixed (const Fixed &other);
        Fixed& operator=(const Fixed &other);
        ///
        int getRawBits(void) const;
        void setRawBits(int const raw);
};
