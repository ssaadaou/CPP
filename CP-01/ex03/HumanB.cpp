/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:34:17 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/28 16:36:14 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_W)
{
    this->weapon = NULL;
    this->name = name_W;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    if(weapon == NULL)
    {
        std::cout << name << " is unarmed" << std::endl;
        return;
    }
    else
        std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::SetWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}