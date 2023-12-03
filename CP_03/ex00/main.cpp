/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:53:05 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/03 20:52:30 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

int main()
{
    ClapTrap fighter("chopper");
    
    ClapTrap fighter2("vv");
    fighter.attack("enemy");
    fighter.takeDamage(4);
    fighter.attack("enemy");
    fighter.beRepaired(11);

    fighter2.attack("someone");
    fighter2.takeDamage(3);
    fighter2.beRepaired(7);
}