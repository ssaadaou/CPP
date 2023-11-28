/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:40:28 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/26 15:44:41 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Phonebook.hpp"

int main()
{
    Phonebook my_pbook;
    contacts tmp_cont;
    std::string comd;
    std::string input;
    int size = 0;

    while(true)
    {
        
        std::cout << "enter command *ADD, SEARCH, EXIT* : "; 
        if(!std::getline(std::cin,comd) || std::cin.eof())
        {
                std::cout << std::endl << "Exiting program !" << std::endl;
                break;
        }
        if (comd == "ADD")
        {
            std::cout << "enter first name: ";
            if(!std::getline(std::cin,input) || std::cin.eof())
            {
                std::cout << std::endl << "Exiting program !" << std::endl;
                break;
            }
            tmp_cont.Set_firstname(input);
            std::cout << "enter last name: ";
            if(!std::getline(std::cin,input) || std::cin.eof())
            {
                std::cout << std::endl << "Exiting program !" << std::endl;
                break;
            }
            tmp_cont.Set_lastname(input);
            std::cout << "enter nick name: ";
            if(!std::getline(std::cin,input) || std::cin.eof())
            {
                std::cout << std::endl << "Exiting program !" << std::endl;
                break;
            }
            tmp_cont.Set_nickname(input);
            std::cout << "enter phone number: ";
            if(!std::getline(std::cin,input) || std::cin.eof())
            {
                std::cout << std::endl << "Exiting program !" << std::endl;
                break;
            }
            if(input.empty())
                continue ;
            tmp_cont.Set_phonenum(input);
            std::cout << "enter darkest secret: ";
            if(!std::getline(std::cin,input) || std::cin.eof())
            {
                std::cout << std::endl << "Exiting program !" << std::endl;
                break;
            }
            tmp_cont.Set_darkestsecret(input);

            my_pbook.add_cont(tmp_cont);
            
            my_pbook.set_size(++size);
        }
        else if (comd == "SEARCH")
        {
            my_pbook.Display_all_cont();
            if (!my_pbook.Display_cont_details())
                break;
        }
        else if( comd == "EXIT")
        {
            std::cout << "Exiting program !" << std::endl;
            break;
        }
    }
}

