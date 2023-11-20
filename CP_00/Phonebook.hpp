/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:21:56 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/18 02:19:07 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <string>
#include <cctype>
#include "Contact.hpp"

class Phonebook
{
    private:
        contacts  t_contact[8];
        int index;
    public:
        Phonebook();
        ~Phonebook();
        void add_cont(const contacts& nw_contact);
        void Display_all_cont() const;
        void Display_cont_details(int idx)const;
        
};
