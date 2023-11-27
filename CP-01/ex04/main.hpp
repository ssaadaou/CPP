/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:21:41 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/27 00:53:05 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>

class Replace
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Replace(const std::string& filename, const std::string& s1, const std::string& s2);
        ~Replace();
        void the_process();
};

// NAME = philo
// HEADER = philo.h

// CC = cc

// CFLAGS = -Wall -Wextra -Werror  #-g -fsanitize=thread

// RM = rm -rf

// SRC = utils.c input.c philo.c routine.c death_note.c
// OBJ = $(SRC:.c=.o)

// all: $(NAME)

// $(NAME): $(OBJ) $(HEADER)
// 	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME) 

// clean:
// 	$(RM) $(OBJ) 

// fclean: clean
// 	$(RM) $(NAME) $(CHECKER)

// re: fclean all