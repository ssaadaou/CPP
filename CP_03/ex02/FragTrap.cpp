/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 02:33:40 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/04 17:03:43 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "FragTrap.hpp"


FragTrap::FragTrap()// by default is called the default contructor
{
    std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name)//by default is called the default contructor
{
    this->name = name;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap (copy)
{
    *this = copy;
    std::cout << "COPY FRAG" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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


FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap : highFivesGuys" << std::endl;
}