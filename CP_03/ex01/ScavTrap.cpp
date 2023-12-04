/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:18:49 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/04 02:41:15 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()// by default is called the default contructor
{
    std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name)//by default is called the default contructor
{
    this->name = name;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    *this = copy;
    std::cout << "COPY SCAV" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is a guard gate" << std::endl;
}