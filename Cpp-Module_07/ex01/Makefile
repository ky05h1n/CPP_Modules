# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 16:49:55 by enja              #+#    #+#              #
#    Updated: 2023/09/06 16:50:07 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = templat

SRC = main.cpp 

CC = g++

FLAGS = -Wall -Wextra -Werror -g -fsanitize=address


all: $(NAME)

$(NAME) : $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
		rm -rf $(NAME)

flcean : clean

re : flcean all