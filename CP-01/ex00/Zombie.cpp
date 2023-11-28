/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:23:59 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/28 15:44:26 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << name << ": destroyed !" << std::endl;
}

void Zombie::announce (void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
// file for main only
int main ()
{
    Zombie zombie1("foo");
    zombie1.announce();

    Zombie *zombie2 = newZombie("vivi");
    zombie2->announce();
    delete zombie2;

    randomChump("capo");
}
