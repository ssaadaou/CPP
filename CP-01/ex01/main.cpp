/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:26:44 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/28 01:37:18 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *hor = zombieHorde(N, "name of zombie");
    for(int i = 0; i < N ; i++)
        hor[i].announce();
    delete[] hor;
}
