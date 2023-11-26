# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 18:56:04 by ssaadaou          #+#    #+#              #
#    Updated: 2023/11/25 18:57:34 by ssaadaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFILES = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
CPPOFILES = $(CPPFILES:%.cpp=%.o)
NAME = Weapon

all: $(NAME)

$(NAME) : $(CPPOFILES) Weapon.hpp HumanA.hpp HumanB.hpp 
	$(CPPC) $(CPPOFILES) -o $(NAME)

%.o : %.cpp
	$(CPPC) $(CPPFLAGS) $< -c

clean:
	rm -rf $(CPPOFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re