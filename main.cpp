/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:40:28 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/18 19:40:28 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main ()
{
    Phonebook my_pbook;
    contacts tmp_cont;
    std::string comd;
    std::string input;
    
    while(true)
    {
        std::cout << "enter command *ADD, SEARCH, EXIT* : ";
        std::getline(std::cin,comd);
        int index;
        if (comd == "ADD")
        {
            std::cout << "enter first name: ";
            std::getline(std::cin, input);
            tmp_cont.Set_firstname(input);
            std::cout << "enter last name: ";
            std::getline(std::cin, input);
            tmp_cont.Set_lastname(input);
            std::cout << "enter nick name: ";
            tmp_cont.Set_nickname(input);
            std::getline(std::cin, input);
            std::cout << "enter phone number: ";
            std::getline(std::cin, input);
            tmp_cont.Set_phonenum(input);
            std::cout << "enter darkest secret: ";
            std::getline(std::cin, input);
            tmp_cont.Set_darkestsecret(input);

            my_pbook.add_cont(tmp_cont);
        }
        else if (comd == "SEARCH")
        {
            my_pbook.Display_all_cont();
            std::cout << "enter index of the contact to show details: ";
            std::cin >> index;
            my_pbook.Display_cont_details(index);
        }
        else if( comd == "EXIT")
            break;
    
    }
}