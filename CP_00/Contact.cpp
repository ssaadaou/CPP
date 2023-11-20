/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tes1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:55:59 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/15 20:55:59 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// class Contact {
// private:
//     std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

// public:
//     void setDetails(const std::string& fName, const std::string& lName, 
//                     const std::string& nick, const std::string& phone, 
//                     const std::string& secret) {
//         firstName = fName;
//         lastName = lName;
//         nickname = nick;
//         phoneNumber = phone;
//         darkestSecret = secret;
//     }

//     // Add getter methods as needed to retrieve contact details
// };
// class PhoneBook {
// private:
//     Contact contacts[8];
//     int currentIndex = 0;

// public:
//     void addContact(const Contact& newContact) {
//         // Replace the oldest contact if 8 contacts already exist
//         contacts[currentIndex % 8] = newContact;
//         currentIndex++;
//     }

//     void displayContacts() {
//         // Loop through the contacts array and display details
//         // Implement the formatting logic as per the exercise requirement
//     }

//     // Add a method to display detailed contact information if needed
// };
// int main() {
//     PhoneBook myPhoneBook;
//     std::string command, fName, lName, nick, phone, secret;

//     while (true) {
//         std::cout << "Enter command (ADD, SEARCH, EXIT): ";
//         std::cin >> command;

//         if (command == "ADD") {
//             std::cout << "Enter first name: "; std::cin >> fName;
//             std::cout << "Enter last name: "; std::cin >> lName;
//             // ... get the rest of the details
//             Contact newContact;
//             newContact.setDetails(fName, lName, nick, phone, secret);
//             myPhoneBook.addContact(newContact);
//         } else if (command == "SEARCH") {
//             myPhoneBook.displayContacts();
//             // ... implement search functionality
//         } else if (command == "EXIT") {
//             break;
//         }
//     }
//     return 0;
// }

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
}
void contacts::Set_lastname(const std::string& name)
{
    last_name = name;
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