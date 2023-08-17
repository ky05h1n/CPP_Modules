# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 06:26:30 by enja              #+#    #+#              #
#    Updated: 2023/08/17 06:29:10 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl 

SRC = main.cpp ClapTrap.cpp

CC = g++

FLAGS = -W -W -W

all : $(NAME)

$(NAME) : $(SRC)
	 $(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
		rm -rf $(NAME)

clean : fclean


re : fclean all