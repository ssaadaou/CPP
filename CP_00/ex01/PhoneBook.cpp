/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:21:26 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/21 22:07:20 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Phonebook.hpp"

void    Phonebook::set_size(int size)
{
    this->constacts_size = size;
}

Phonebook::Phonebook()
{
    constacts_size = 0;
    index = 0;
}
Phonebook::~Phonebook()
{
}

void Phonebook::add_cont(const contacts& nw_contact)
{
    if(index < 8)
    {
        t_contact[index] = nw_contact;
        index++;
    }
    else
        t_contact[index % 8] = nw_contact;
}

// std::string long_string(std::string tmp)
// {
//     std::string new_str = 
// }

void Phonebook::Display_all_cont() const
{
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|  INDEX   |FIRST NAME| LAST NAME| NICK NAME|" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;
    for (int i = 0; i < index; i++)
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
    if(!std::getline(std::cin,comd))
    {
        if(std::cin.eof())
        {
            std::cout << "Exiting program !\n";
            // exit(0);
        }
        return (false);
    }
    else 
        idx = std::atoi(comd.c_str());

    if(idx > 0 && idx <= index && this->constacts_size)
    {
        std::cout << "Fist_name: " << t_contact[idx - 1].Get_firstname() << std::endl;
        std::cout << "Last_name: " << t_contact[idx -1].Get_lastname() << std::endl;
        std::cout << "Nick_name: " << t_contact[idx -1].Get_nickname() << std::endl;
        std::cout << "Phone_number: " << t_contact[idx -1].Get_phonenum() << std::endl;
    }
    else
    {
        std::cout << "Invalid_index" << std::endl;
        if (this->constacts_size)
            Display_cont_details();
    }
    return true;
}

// int main()
// {
//     Phonebook my_Pbook;
//     contacts a, b,c,d,e,f,g,h,p;
    
//     a.Set_firstname("0");
//     a.Set_lastname("scott");
//     my_Pbook.add_cont(a);

//     b.Set_firstname("1");
//     b.Set_lastname("aaa");
//     my_Pbook.add_cont(b);

//     c.Set_firstname("2");
//     c.Set_lastname("sss");
//     my_Pbook.add_cont(c);

//     d.Set_firstname("3");
//     d.Set_lastname("ddd");
//     my_Pbook.add_cont(d);

//     e.Set_firstname("4");
//     e.Set_lastname("eee");
//     my_Pbook.add_cont(e);

//     f.Set_firstname("5");
//     f.Set_lastname("ccc");
//     my_Pbook.add_cont(f);

//     g.Set_firstname("6");
//     g.Set_lastname("vvvv");
//     my_Pbook.add_cont(g);

//     h.Set_firstname("7");
//     h.Set_lastname("zzzz");
//     my_Pbook.add_cont(h);

//     p.Set_firstname("8");
//     p.Set_lastname("kkkk");
//     my_Pbook.add_cont(p);

//     my_Pbook.Display_all_cont();
//     my_Pbook.Display_cont_details(3);
//     my_Pbook.Display_cont_details(7);

// }