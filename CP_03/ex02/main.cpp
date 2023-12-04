/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 02:43:25 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/04 17:30:48 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    // we call child obj that has all the data members
    FragTrap obj;
    obj.attack("the enemy");
    obj.takeDamage(10);
    obj.beRepaired(1);
    obj.highFivesGuys();
}