# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 13:58:51 by enja              #+#    #+#              #
#    Updated: 2023/10/06 03:57:35 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

SRC = main.cpp RPN.cpp

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror #-g -fsanitize=address

all: $(NAME)

$(NAME) : $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
		rm -rf $(NAME)

flcean : clean

re : flcean all
