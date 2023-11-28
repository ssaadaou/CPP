/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 01:59:54 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/28 19:47:22 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Harl.hpp"

void Harl::debug()
{
    std::cout << "DEBUG MSG" << std::endl;
}

void Harl::info()
{
    std::cout << "info MSG" << std::endl;
}

void Harl::warning()
{
    std::cout << "warning MSG" << std::endl;
}

void Harl::error()
{
    std::cout << "error MSG" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string lev[4] = {"DEBUG", "INFO" ,"WARNING", "ERROR"};
    for(int i = 0; i < 4; i++)
    {
        if(lev[i] == level)
        {
            (this->*ptr[i])();
            return;    
        }
    }
    std::cout<< "level doesn't exist!" << std::endl;
} 