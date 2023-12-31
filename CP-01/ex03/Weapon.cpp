/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 02:28:16 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/25 18:58:18 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
    return (this->type);
}
void Weapon::setType(std::string new_type)
{
    this->type = new_type;
}
