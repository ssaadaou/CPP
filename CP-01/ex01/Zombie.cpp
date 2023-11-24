/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:27:18 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/24 17:44:23 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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
int main()
{
    int N = 93;
    Zombie *hor = zombieHorde(N, "name of zombie");
    for(int i = 0; i < N ; i++)
        hor[i].announce();
    delete[] hor;
}