/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:24:12 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/28 15:44:00 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce (void);
};

Zombie *newZombie(std::string name);
void randomChump( std::string name);





//Class obj; //constructor here called
//obj.func();
//obj.func2();
//obj.var = ?;
//destructor here called
// once you delete an object which means it's no longer running the destructor called automaticlly 
