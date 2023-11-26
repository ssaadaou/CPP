/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:55:59 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/21 20:17:08 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Contact.hpp"

contacts::contacts()
{
}
contacts::~contacts()
{  
}

void contacts::Set_firstname(const std::string& name)
{
    first_name = name;
}
void contacts::Set_nickname(const std::string& name)
{
    nick_name = name;
    std::cout << "NICK===name inside______________|"<< nick_name << std::endl;

}
void contacts::Set_lastname(const std::string& name)
{
    last_name = name;
    std::cout << "lastname inside______________|"<< last_name << std::endl;
}
void contacts::Set_phonenum(const std::string& number)
{
    phone_num = number;
}
void contacts::Set_darkestsecret(const std::string& bohoo)
{
    darkest_secret = bohoo;
}

std::string contacts::Get_firstname()const
{
    return first_name;
}
std::string contacts::Get_lastname()const
{
    return last_name;
}
std::string contacts::Get_nickname()const
{
    return nick_name;
}
std::string contacts::Get_phonenum()const
{
    return phone_num;
}
std::string contacts::Get_darkestsecret()const
{
    return darkest_secret;
}