/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:53:05 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/03 11:46:34 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

int main()
{
    ClapTrap fighter("chopper");
    
    fighter.attack("enemy");
    fighter.takeDamage(4);
    fighter.beRepaired(11);
}