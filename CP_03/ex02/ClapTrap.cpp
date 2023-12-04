/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:17:14 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/04 01:37:24 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    attack_damage = 0;
    hit_points = 100;
    energy_points = 10;
    std::cout << " ** ClapTrap default is constructed." << std::endl;
}

//test
void    ClapTrap::display()
{
    std::cout <<"  ************* Clap Trap\n";
}

ClapTrap::ClapTrap(std::string name) 
{
    attack_damage = 0;
    hit_points = 10;
    energy_points = 10;
    this->name = name;
    std::cout << "ClapTrap ++" << this->name << " is constructed." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " is destructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << " -- COPY -- > constructor called"  << std::endl;
	*this = copy;	
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if(this != &other)
    {
        name = other.name;
        hit_points = other.hit_points;
        attack_damage = other.attack_damage;
        energy_points = other.energy_points;
    }
    return(*this);
}

void ClapTrap::attack(const std::string& target)
{
    if(energy_points >= 1 && hit_points > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " and causes " << attack_damage << " hit points of damage." << std::endl;
        energy_points--;
    }
    else 
        std::cout << "ClapTrap " << name << " has no energy " ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hit_points > 0)
    {
        std::cout << "ClapTrap " << name << " takes " << amount << " damage " << std::endl;
        if(amount > hit_points)
            hit_points = 0;
        else
            hit_points -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energy_points > 0 && hit_points > 0 )
    {
        std::cout << "ClapTrap " << name << " repairs itself and recovers " << amount << " hit points." << std::endl ;
        energy_points--;
        hit_points += amount;
    }  
}