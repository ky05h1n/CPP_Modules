# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/12 02:39:09 by enja              #+#    #+#              #
#    Updated: 2023/08/20 09:24:28 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie 

SRC = Zombie.cpp main.cpp zombieHorde.cpp

CC = c++

FLAGS = -W -W -W

all : $(NAME)

$(NAME) : $(SRC)
	 $(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
		rm -rf $(NAME)

clean : fclean


re : fclean all