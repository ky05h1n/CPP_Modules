# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 18:46:50 by enja              #+#    #+#              #
#    Updated: 2023/10/08 15:11:11 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRC = main.cpp ScalarConverter.cpp 

CC = c++

FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME) : $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
		rm -rf $(NAME)

flcean : clean

re : flcean all