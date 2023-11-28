/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:07:49 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/28 22:29:43 by ssaadaou         ###   ########.fr       */
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
        Fixed();
        ~Fixed();
        Fixed (const Fixed &other);
        Fixed& operator=(const Fixed &other);
        ///
        int getRawBits(void) const;
        void setRawBits(int const raw);
};


//Class obj(existing_obj);

// obj.var = existing_obj.var

//CAO called when we have 2 obj already initialized  obj1 = obj2;

//101.345 = 10.01345 * 10^2

//21.55652552555956532655565454
//21.56532655565454