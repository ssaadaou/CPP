/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:27:18 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/28 01:27:06 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}
Zombie::Zombie()
{

}

Zombie::~Zombie()
{
    
}

void Zombie::announce (void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
// protect negative num
