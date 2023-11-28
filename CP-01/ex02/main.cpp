/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:17:47 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/28 16:14:08 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string msg = "HI THIS IS BRAIN";
    std::cout << msg << std::endl;
    
    std::string *stringPTR = &msg;
    std::string &stringREF = msg;
    
    std::cout << "The memory address of the string variable -> " << &msg << std::endl
            <<  "The memory address held by stringPTR -> " << stringPTR << std::endl
            << "The memory address held by stringREF -> " << &stringREF << std::endl
            << "---------------------------------" << std::endl
            << "The value of the string variable -> " << msg << std::endl
            << "The value pointed to by stringPTR -> " << *stringPTR << std::endl
            << "The value pointed to by stringREF -> " << stringREF << std::endl;
}