/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:38:31 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/30 14:44:45 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie zombie1("gecko moria");
    zombie1.announce();

    Zombie *zombie2 = newZombie("vivi");
    zombie2->announce();
    delete zombie2;

    randomChump("Dr.hogback");
}