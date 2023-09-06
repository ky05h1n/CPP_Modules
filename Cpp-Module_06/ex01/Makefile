# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 14:21:40 by enja              #+#    #+#              #
#    Updated: 2023/09/05 15:09:22 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization

SRC = main.cpp Serializer.cpp

CC = g++

FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME) : $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
		rm -rf $(NAME)

flcean : clean

re : flcean all