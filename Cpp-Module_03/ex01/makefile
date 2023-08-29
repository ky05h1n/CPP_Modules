# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 06:26:30 by enja              #+#    #+#              #
#    Updated: 2023/08/27 13:53:42 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp 

CC = c++

FLAGS = -Wall -Wextra -Werror -fsanitize=address -g

all : $(NAME)

$(NAME) : $(SRC)
	 $(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
		rm -rf $(NAME)

clean : fclean


re : fclean all