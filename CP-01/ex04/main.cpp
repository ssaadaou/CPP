/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:15:36 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/26 03:29:13 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Replace::Replace()
{
    std::cout << "Enter the filename: ";
    std::getline(std::cin, this->filename);
    std::cout << "Enter the string to replace: ";
    std::getline(std::cin, this->s1);
    std::cout << "Enter the string to replace with: ";
    std::getline(std::cin, this->s2);
}

Replace::~Replace()
{
}

int main(int ac, char **av)
{
    
}