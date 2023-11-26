/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:38:11 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/25 16:38:11 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    else
    {
        for(int i = 1; i < ac; i++)
        {
            for(int j = 0; av[i][j]; j++)
                std::cout << (char)std::toupper(av[i][j]);
        }
    }
    std::cout<< std::endl;
}