/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:21:41 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/26 03:27:56 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string.h>

class Replace
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Replace();
        ~Replace();
        void ft_replace();
};