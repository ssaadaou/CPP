# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 16:25:16 by ssaadaou          #+#    #+#              #
#    Updated: 2023/11/25 16:28:57 by ssaadaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFILES = ex00.cpp
CPPOFILES = $(CPPFILES:%.cpp=%.o)
NAME = megaphone

all: $(NAME)

$(NAME) : $(CPPOFILES) #.hp
	$(CPPC) $(CPPOFILES) -o $(NAME)

%.o : %.cpp
	$(CPPC) $(CPPFLAGS) $< -c

clean:
	rm -rf $(CPPOFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re