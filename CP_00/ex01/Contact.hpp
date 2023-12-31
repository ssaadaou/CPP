/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:04:25 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/26 13:31:05 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include <iostream>

class contacts
{
    private: 
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_num;
        std::string darkest_secret;
    public:
        contacts();
        ~contacts();
        void Set_firstname(const std::string& name);
        void Set_lastname(const std::string& name);
        void Set_nickname(const std::string& name);
        void Set_phonenum(const std::string& number);
        void Set_darkestsecret(const std::string& bohoo);
        
        std::string Get_firstname() const;
        std::string Get_lastname() const;
        std::string Get_nickname() const;
        std::string Get_phonenum() const;
        std::string Get_darkestsecret() const;  
};
