# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 23:47:50 by ssaadaou          #+#    #+#              #
#    Updated: 2023/11/27 23:49:52 by ssaadaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC = c++
SRC = randomChump.cpp Zombie.cpp newZombie.cpp 
HEADER = Zombie.hpp
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