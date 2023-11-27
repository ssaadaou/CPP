/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:21:26 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/26 15:45:39 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Phonebook.hpp"
#include <cstdlib>

Phonebook::Phonebook()
{
    constacts_size = 0;
    index = 0;
}

Phonebook::~Phonebook()
{
}

void    Phonebook::set_size(int size) 
{
    if(size > 8)
        return;
    this->constacts_size = size;
}

void Phonebook::add_cont(const contacts& nw_contact)
{
    if(index > 7)
        index = 0;
    t_contact[index] = nw_contact;
    index++;
}

void Phonebook::Display_all_cont() const
{
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|  INDEX   |FIRST NAME| LAST NAME| NICK NAME|" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;
    for (int i = 0; i < constacts_size ; i++)
    {
        std::string tmp = t_contact[i].Get_firstname();
        std::string tmp1 = t_contact[i].Get_lastname();
        std::string tmp2 = t_contact[i].Get_nickname();

        if(t_contact[i].Get_firstname().length() > 10)
            tmp = t_contact[i].Get_firstname().substr(0, 9) + ".";
        if(t_contact[i].Get_lastname().length() > 10)
            tmp1 = t_contact[i].Get_lastname().substr(0, 9) + ".";
        if(t_contact[i].Get_nickname().length() > 10)
            tmp2 = t_contact[i].Get_nickname().substr(0, 9) + ".";
        std::cout << "|"<< std::setw(10) << i + 1 << "|"
                << std::setw(10) << tmp << "|"
                << std::setw(10) << tmp1 << "|" 
                << std::setw(10) << tmp2 << "|"
                << std::endl;
                std::cout <<"|__________|__________|__________|__________|" << std::endl;
    }
}

bool Phonebook::Display_cont_details(void)
{
    std::string comd;
    int idx;

    std::cout << "enter index of the contact to show details: " << std::endl;
    if(!std::getline(std::cin,comd) || std::cin.eof())
    {
        std::cout << std::endl << "Exiting program !" << std::endl;
        return false;
    }
    else 
        idx = std::atoi(comd.c_str());

    if (idx > 0 && idx <= this->constacts_size && comd.size() == 1)
    { 
        std::cout << "Fist_name: " << t_contact[idx - 1].Get_firstname() << std::endl;
        std::cout << "Last_name: " << t_contact[idx -1].Get_lastname() << std::endl;
        std::cout << "Nick_name: " << t_contact[idx -1].Get_nickname() << std::endl;
        std::cout << "Phone_number: " << t_contact[idx -1].Get_phonenum() << std::endl;
        std::cout << "Darkest_Secret: " << t_contact[idx -1].Get_darkestsecret() << std::endl;
    }
    else
    {
        std::cout << "Invalid_index" << std::endl;
        if (this->constacts_size)
            Display_cont_details();
    }
    return true;
}
