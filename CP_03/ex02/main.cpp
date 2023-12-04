/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 02:43:25 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/04 02:45:24 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap Frag("Frag");

    Frag.attack("target");
    Frag.takeDamage(4);
    Frag.beRepaired(5);
    Frag.highFivesGuys();
}