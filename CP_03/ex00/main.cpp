/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:53:05 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/03 22:04:10 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap fighter("chopper");
    
    fighter.attack("my hreart");
    fighter.attack("my hreart");
    fighter.attack("my hreart");
    fighter.takeDamage(12);
    fighter.attack("my hreart");

}