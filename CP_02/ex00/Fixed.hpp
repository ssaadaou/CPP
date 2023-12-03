/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:07:49 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/02 15:38:20 by ssaadaou         ###   ########.fr       */
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
        Fixed();
        ~Fixed();
        Fixed (const Fixed &other);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        Fixed& operator=(const Fixed &other);
    
};

