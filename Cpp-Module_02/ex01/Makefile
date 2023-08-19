# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 14:23:27 by ky05h1n           #+#    #+#              #
#    Updated: 2023/08/18 14:27:21 by ky05h1n          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixedpoints 

SRC = Fixed.cpp main.cpp

CC = g++

FLAGS = -W -W -W

all : $(NAME)

$(NAME) : $(SRC)
	 $(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
		rm -rf $(NAME)

clean : fclean


re : fclean all 