/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:21:56 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/21 17:20:43 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include <stdio.h>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>
#include <cctype>
#include "Contact.hpp"

class Phonebook
{
    private:
        contacts  t_contact[8];
        int index;
        int constacts_size;
    public:
        Phonebook();
        ~Phonebook();
        void add_cont(const contacts& nw_contact);
        void Display_all_cont() const;
        bool Display_cont_details(void);

        void    set_size(int size);
        
};
