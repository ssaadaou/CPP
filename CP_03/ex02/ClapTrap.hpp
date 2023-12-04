/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:18:36 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/04 02:34:00 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hit_points;
        unsigned int energy_points;
        unsigned int attack_damage;
        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ClapTrap &operator=(const ClapTrap &other);
        ~ClapTrap();
    
        void display();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};