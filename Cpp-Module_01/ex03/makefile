# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/13 03:21:35 by enja              #+#    #+#              #
#    Updated: 2023/08/13 03:22:20 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fight 

SRC = HumanA.cpp  HumanB.cpp  Weapon.cpp  main.cpp

CC = g++

FLAGS = -W -W -W

all : $(NAME)

$(NAME) : $(SRC)
	 $(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
		rm -rf $(NAME)

clean : fclean


re : fclean all