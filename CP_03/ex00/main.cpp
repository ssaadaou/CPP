/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:53:05 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/04 18:17:51 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

int main()
{
    ClapTrap fighter("chopper");
    
    fighter.attack(" the enemy");

    fighter.takeDamage(9);
    fighter.beRepaired(1);
}