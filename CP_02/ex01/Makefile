#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 21:07:24 by ssaadaou          #+#    #+#              #
#    Updated: 2023/12/01 16:27:42 by ssaadaou         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = Harl

CC = c++
SRC = Harl.cpp main.cpp
HEADER = Harl.hpp
OBJ_F = $(SRC:%.cpp=%.o)
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ_F) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ_F) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_F)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re