# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 16:49:55 by enja              #+#    #+#              #
#    Updated: 2023/10/13 16:10:49 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = templat

SRC = main.cpp 

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror -g -fsanitize=address


all: $(NAME)

$(NAME) : $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
		rm -rf $(NAME)

flcean : clean

re : flcean all