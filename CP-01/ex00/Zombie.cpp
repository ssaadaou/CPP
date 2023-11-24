/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:23:59 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/23 23:07:29 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << name << " destroyed !" << std::endl;
}
void Zombie::announce (void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
int main ()
{
    Zombie zombie1("foo");
    zombie1.announce();

    Zombie *zombie2 = newZombie("vivii");
    zombie2->announce();
    delete zombie2;

    randomChump("rere");
}

//nems poulet 8.california rolls creme cheese 4 . makifry camba crunchy 6. spring rolls exotic 6. 
// kyoto spring spring rolls 6. crunchy yo ti fry 6. 6 maki concombre. futomaki kan 5 

//55

// 25
//59
//60
// 59
// 55
//39 
// 49 -