/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:57:01 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/27 01:01:22 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "main.hpp"

Replace::Replace(const std::string& filename, const std::string& s1, const std::string& s2): filename(filename), s1(s1), s2(s2)
{
}

Replace::~Replace()
{
}

int main(int ac, char **av)
{
    
    // Check for the correct number of arguments
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " <filename> <string_to_replace> <replacement_string>" << std::endl;
        return 1;
    }

    // Create a Replace object with the command line arguments
    Replace replacer(av[1], av[2], av[3]);
    
    // Call the processFile method to perform the replacement
    replacer.the_process();

    return 0;
}