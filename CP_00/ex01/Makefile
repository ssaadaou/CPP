# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 16:23:00 by ssaadaou          #+#    #+#              #
#    Updated: 2023/11/27 13:50:02 by ssaadaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

CC = c++
SRC = main.cpp Contact.cpp PhoneBook.cpp
HEADER = Phonebook.hpp Contact.hpp
OBJ_F = $(SRC:%.cpp=%.o)
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ_F) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ_F) -o $(NAME)

%.o : %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_F)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re