/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:56:17 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/25 18:53:57 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_W, Weapon &weapon) : weapon(weapon) // weapon(weapon) is a reference to the weapon passed as argument
{
    name = name_W;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    // <name> attacks with their <weapon type>
    std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;
}

