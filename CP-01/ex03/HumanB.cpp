/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:34:17 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/25 19:02:50 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_W)
{
    this->name = name_W;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::SetWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}