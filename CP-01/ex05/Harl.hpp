/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 02:00:03 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/27 02:09:12 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#pragma once

#include <iostream>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain( std::string level);
};