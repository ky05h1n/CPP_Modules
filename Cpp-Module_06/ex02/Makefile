# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 15:14:03 by enja              #+#    #+#              #
#    Updated: 2023/10/08 15:30:56 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

SRC = main.cpp Base.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -g -fsanitize=address


all: $(NAME)

$(NAME) : $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
		rm -rf $(NAME)

flcean : clean

re : flcean all