# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enja <enja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 13:58:55 by enja              #+#    #+#              #
#    Updated: 2023/10/08 16:14:26 by enja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

SRC = main.cpp BitcoinExchange.cpp

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror -g -fsanitize=address

all: $(NAME)

$(NAME) : $(SRC)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean : 
		rm -rf $(NAME)

flcean : clean

re : flcean all
