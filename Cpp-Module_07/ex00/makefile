# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 15:13:45 by enja              #+#    #+#              #
#    Updated: 2023/10/13 16:10:44 by enja             ###   ########.fr        #
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