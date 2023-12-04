/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:19:01 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/04 02:37:55 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ClapTrap &operator=(const ClapTrap &other);
        ~ScavTrap();
        void guardGate();
};

// class ff : public ScavTrap
// {
//     public:
//          ff(){};
//          ~ff(){};
//         void display(){
//             std::cout << " ******** A\n";
//          }
//         // ff(std::string name){};
// };


