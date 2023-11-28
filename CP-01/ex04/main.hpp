/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:21:41 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/28 17:20:55 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>

class Replace
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Replace(const std::string& filename, const std::string& s1, const std::string& s2);
        ~Replace();
        void the_process();
};
