/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 02:33:12 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/12/04 02:51:55 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();
        void highFivesGuys(void);
};

/// DerivedClass obj(obj2);
//here THe construction of the BaseClass begin First, but the Copy constructor which is called by the Derived class one