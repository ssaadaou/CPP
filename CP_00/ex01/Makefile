# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 16:23:00 by ssaadaou          #+#    #+#              #
#    Updated: 2023/11/25 16:52:43 by ssaadaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFILES = main.cpp Contact.cpp PhoneBook.cpp
CPPOFILES = $(CPPFILES:%.cpp=%.o)
NAME = phonebook

all: $(NAME)

$(NAME) : $(CPPOFILES) Contact.hpp PhoneBook.hpp
	$(CPPC) $(CPPOFILES) -o $(NAME)

%.o : %.cpp
	$(CPPC) $(CPPFLAGS) $< -c

clean:
	rm -rf $(CPPOFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re