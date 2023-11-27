/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:15:36 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/27 01:55:38 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "main.hpp"

void Replace::the_process()
{
    bool flag = false;
    std::ifstream input_file(this->filename.c_str());
    if(!input_file)
    {
        std::cerr << "Error opening file -> " << this->filename << std::endl;
        return ;
    }
    std::string out_file = this->filename + ".replace";
    std::ofstream output_file(out_file.c_str());
    if(!output_file)
    {
        std::cerr << "Error creating new/replace file -> " << this->filename << std::endl;
        input_file.close();
        return ;
    }
    if(s1.empty())
    {
        std::cerr << "Error string to replace is empty -> " << this->filename << std::endl;
        input_file.close();
        output_file.close();
        return;
    }
    std::string line;
    while(std::getline(input_file, line))
    {
        std::string New_line;
        size_t start_pos = 0;        
        while(start_pos < line.length())
        {
            size_t pos = line.find(s1, start_pos);
            if(pos != std::string::npos)
            {
                flag = true;
                New_line += line.substr(start_pos, pos - start_pos);
                New_line += s2;
                start_pos = pos + s1.length();
            }
            else
            {
                New_line += line.substr(start_pos);
                break;
            }
        }
        output_file << New_line << std::endl;
    }
    input_file.close();
    output_file.close();
    if(flag)
        std::cout << "Replacement completed successfully." << std::endl;
    else
        std::cout << "No match found." << std::endl;
}