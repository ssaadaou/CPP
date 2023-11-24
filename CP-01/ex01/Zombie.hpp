/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:27:38 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/24 17:40:01 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void announce();

};

Zombie* zombieHorde(int N, std::string name);