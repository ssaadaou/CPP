/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:21:26 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/18 02:30:59 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
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

void Phonebook::Display_all_cont() const
{
    for (int i = 0; i < index; i++)
    {
        std::cout << "________________" << "|";
        std::cout << i << "|"
                << t_contact[i].Get_firstname() << "|"
                << t_contact[i].Get_lastname() << std::endl;
    }
}

void Phonebook::Display_cont_details(int idx) const
{
    if(idx >= 0 && idx < index)
    {
        std::cout << "Fist_name: " << t_contact[idx].Get_firstname() << std::endl;
        std::cout << "Last_name: " << t_contact[idx].Get_lastname() << std::endl;
        std::cout << "Nick_name: " << t_contact[idx].Get_nickname() << std::endl;
        std::cout << "Phone_number: " << t_contact[idx].Get_phonenum() << std::endl;
    }
    else
        std::cout << "Invalid_index" << std::endl;
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