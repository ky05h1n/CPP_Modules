# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 17:29:27 by ky05h1n           #+#    #+#              #
#    Updated: 2023/08/03 18:08:08 by ky05h1n          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook 

SRC = main.cpp phonebook.cpp

CC = g++

FLAGS = -W -W -W

all : $(NAME)

$(NAME) : $(SRC)
	 $(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
		rm -rf $(NAME)

clean : fclean


re : fclean all