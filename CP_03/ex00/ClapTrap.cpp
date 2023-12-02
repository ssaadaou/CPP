/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:17:14 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/01 22:36:28 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), attack_damage(0), hit_points(10), energy_points(10)
{
    std::cout << "ClapTrap " << this->name << " is constructed." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " is destructed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(energy_points > 0 && hit_points > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " and causes " << attack_damage << " hit points of damage." << std::endl;
        energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hit_points > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " and causes " << attack_damage << " hit points of damage." << std::endl;
        hit_points--;
    }
}